//test for functions to implement

#define CATCH_CONFIG_MAIN
#include "catch.hpp"
#include "functions_to_implement.cpp"

TEST_CASE ("Computing Sign of num", "[sign]"){
    CHECK( Sign(-2) == -1); //check
    CHECK( Sign(21) == 1);
    CHECK( Sign(0) == 0);
}
TEST_CASE ("Match Vectors"){
    std::vector<int> test = {1,2,0};
    CHECK( MatchVectors({1,2,3},{3,4,5}) == test);
}
