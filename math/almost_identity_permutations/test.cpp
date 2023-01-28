// tests.cpp
#include <almost_identity_permutations.h>
#include <catch.hpp>
 
TEST_CASE("One") {
    REQUIRE(1 == AlmostIdentityPermutations(4, 1)());
}
TEST_CASE("Two") {
    REQUIRE(7 == AlmostIdentityPermutations(4, 2)());
}
TEST_CASE("Three") {
    REQUIRE(31 == AlmostIdentityPermutations(5, 3)());
}
TEST_CASE("Four") {
    REQUIRE(76 == AlmostIdentityPermutations(5, 4)());
}
TEST_CASE("Factorial") {
    REQUIRE(24 == AlmostIdentityPermutations(4, 4)());
}
