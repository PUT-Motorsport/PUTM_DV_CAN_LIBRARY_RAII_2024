#pragma once

#include <unistd.h>
#include <string.h>
#include <cstring>
#include <iostream>
#include <stdexcept>

#include <net/if.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <sys/ioctl.h>
#include <linux/can.h>
#include <linux/can/raw.h>

#include "can_id_specializations.hpp"

namespace PUTM_CAN
{
    constexpr time_t NO_TIMEOUT = 0;

    template <typename T>
    class CanRx
    {
    public:
        inline CanRx(const char *const ifname, const time_t rx_timeout_in_s);
        inline ~CanRx();
        inline CanRx(const CanRx &) = delete;
        inline CanRx &operator=(const CanRx &) = delete;

        inline T const receive();
        inline T const receive_rtr(); // disable when T = can_frame

    private:
        using file_descriptor_index = int;
        static constexpr file_descriptor_index INVALID_FILE_DESCRIPTOR = -1;
        file_descriptor_index file_descriptor;
    };
}

namespace PUTM_CAN
{
    template <typename T>
    inline CanRx<T>::CanRx(const char *const interface_name, const time_t rx_timeout_in_seconds)
        : file_descriptor(INVALID_FILE_DESCRIPTOR)
    {
        static_assert(can_id<T> != INVALID_CAN_ID, "Invalid device struct type");
        ifreq ifr;
        sockaddr_can addr;
        file_descriptor = socket(PF_CAN, SOCK_RAW, CAN_RAW);
        if (file_descriptor == -1)
        {
            throw std::runtime_error("socket() failed");
        }
        // TODO: Something safer than strncpy ???
        (void)std::strncpy(ifr.ifr_name, interface_name, sizeof(ifr.ifr_name));
        if (ioctl(file_descriptor, SIOCGIFINDEX, &ifr) == -1)
        {
            throw std::runtime_error("ioctl() failed");
        }
        timeval tv = {rx_timeout_in_seconds, 0};
        if (setsockopt(file_descriptor, SOL_SOCKET, SO_RCVTIMEO, (const char *)&tv, sizeof(tv)) != 0)
        {
            throw std::runtime_error("setsockopt() set timeout failed");
        }

        // TODO: do not apply filter when T = can_frame
        can_filter filter = {can_id<T>, (CAN_SFF_MASK | CAN_EFF_FLAG | CAN_RTR_FLAG)};
        if (setsockopt(file_descriptor, SOL_CAN_RAW, CAN_RAW_FILTER, &filter, sizeof(filter)) != 0)
        {
            throw std::runtime_error("setsockopt() set filter failed");
        }

        addr.can_family = AF_CAN;
        addr.can_ifindex = ifr.ifr_ifindex;
        if (bind(file_descriptor, (sockaddr *)&addr, sizeof(addr)) == -1)
        {
            throw std::runtime_error("bind() failed");
        }
    }

    template <typename T>
    inline CanRx<T>::~CanRx()
    {
        if (file_descriptor != INVALID_FILE_DESCRIPTOR)
        {
            close(file_descriptor);
        }
    }

    template <typename T>
    inline T const CanRx<T>::receive()
    {
        T rx_frame;
        can_frame frame;
        if (read(file_descriptor, &frame, sizeof(can_frame)) < (ssize_t)sizeof(can_frame))
        {
            throw std::runtime_error("read() failed");
        }
        (void)std::memcpy(&rx_frame, frame.data, sizeof(T));
        std::cout<< can_id<T> << "vs" << frame.can_id << std::endl;
        return rx_frame;
    }

    template <typename T>
    inline T const CanRx<T>::receive_rtr()
    {
        can_frame frame;
        frame.can_id = can_id<T> | CAN_RTR_FLAG;
        frame.can_dlc = sizeof(T);
        if (write(file_descriptor, &frame, sizeof(frame)) < 0)
        {
            throw std::runtime_error("write() failed");
        }
        return receive();
    }

}