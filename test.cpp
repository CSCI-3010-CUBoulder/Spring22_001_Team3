#define CATCH_CONFIG_MAIN
#include <vector>

#include "catch.hpp"
#include "functions_to_implement.cpp"

TEST_CASE( "Testing sum function...", "[sum]" ) {
    std::vector<int> test1{ 0, 2, 4, 6 };
    REQUIRE( Sum( test1 ) == 12 );

    std::vector<int> test2{ 1, 3, 5 };
    REQUIRE( Sum( test2 ) == 9 );
}
