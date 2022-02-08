CXX = g++
CXXFLAGS = -std=c++17 -Wall -Werror

all: test

clean:
	rm test

test: test.cpp
	$(CXX) $(CXXFLAGS) test.cpp -o test
