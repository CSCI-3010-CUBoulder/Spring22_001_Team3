#define CATCH_CONFIG_MAIN
#include <vector>
#include "catch.hpp"
#include "functions_to_implement.cpp"



TEST_CASE("Adding an integer to each member of vector", "[vector]" ) {
    std::vector<int> v;
 
    v.push_back(10);
    v.push_back(20);
    v.push_back(30);
    
    REQUIRE( v.size() == 3 );

    std::vector<int> v2;
 
    v2.push_back(20);
    v2.push_back(30);
    v2.push_back(40);

    
    REQUIRE( VectorPlusN(v,10) == v2 );

 
}

TEST_CASE( "Testing sum function...", "[sum]" ) {
    std::vector<int> test1{ 0, 2, 4, 6 };
    REQUIRE( Sum( test1 ) == 12 );

    std::vector<int> test2{ 1, 3, 5 };
    REQUIRE( Sum( test2 ) == 9 );
}