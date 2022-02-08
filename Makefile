

CXX = g++  # the compiler
CXXFLAGS = -std=c++17 -Wall  # flags for the compiler (use c++17 standards, turn on all optional warnings)

all: test

clean:
	rm functions_to_implement.o test

main: functions_to_implement.o test.cpp
	$(CXX) $(CXXFLAGS) main.cpp functions_to_implement.o -o test

functions_to_implement.o: functions_to_implement.cpp
	$(CXX) $(CXXFLAGS) -c functions_to_implement.cpp
