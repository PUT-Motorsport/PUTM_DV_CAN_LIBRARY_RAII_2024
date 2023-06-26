CXX=g++
CXXFLAGS=-Wall -Wextra -Wshadow -Wconversion -Wpedantic -Werror -std=c++14
SRCS=main.cpp

all: main

main: $(SRCS)
	$(CXX) $(CXXFLAGS) $(SRCS) -o main

clean:
	rm -f main