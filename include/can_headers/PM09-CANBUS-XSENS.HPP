#pragma once

#include <cstdint>

namespace PUTM_CAN {

struct __attribute__((packed)) XsensError{
    uint8_t errorCode ;
};

struct __attribute__((packed)) XsensUtc{
    uint8_t year;
    uint8_t month;
    uint8_t day;
    uint8_t hour;
    uint8_t minute;
    uint8_t second;
    uint16_t tenthmilisecond;
};

struct __attribute__((packed)) XsensStatus{
    uint32_t statusWord;
};

struct __attribute__((packed)) XsensOrientation{
    int16_t q0;
    int16_t q1;
    int16_t q2;
    int16_t q3;
};

struct __attribute__((packed)) XsensEuler{
    int16_t roll;
    int16_t pitch;
    int16_t yaw;
};

struct __attribute__((packed)) XsensInertialData{
    int16_t deltaVx;
    int16_t deltaVy;
    int16_t deltaVz;
    uint8_t exponent;
};

struct __attribute__((packed)) XsensRateOfTurn{
    int16_t gyrX;
    int16_t gyrY;
    int16_t gyrZ;
};

struct __attribute__((packed)) XsensDeltaQ{
    int16_t deltaQ0;
    int16_t deltaQ1;
    int16_t deltaQ2;
    int16_t deltaQ3;
};

struct __attribute__((packed)) XsensAcceleration{
    int16_t accX;
    int16_t accY;
    int16_t accZ;
};

struct __attribute__((packed)) XsensFreeAcceleration{
    int16_t freeAccX;
    int16_t freeAccy;
    int16_t freeAccz;
};

struct __attribute__((packed)) XsensMagneticField{
    int16_t magX;
    int16_t magy;
    int16_t magZ;
};

struct __attribute__((packed)) XsensTemperatureAndPressure{
    int16_t temperature;
    uint32_t pressure;
};

struct __attribute__((packed)) XsensAccelerationHighRate{
    int16_t accX;
    int16_t accY;
    int16_t accZ;
};

struct __attribute__((packed)) XsensRateOfTurnHighRate{
    int16_t gyrX;
    int16_t gyrY;
    int16_t gyrZ;
};

struct __attribute__((packed)) XsensPosition{
    int32_t lat;
    int32_t lon;
};

struct __attribute__((packed)) XsensAltitudeEllipsoid{
    uint32_t altEllipsoid;
};

struct __attribute__((packed)) XsensVelocity{
    int16_t velX;
    int16_t velY;
    int16_t velZ;
};



}  // namespace PUTM_CAN