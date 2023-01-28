#include "comp_long_numbers.h"
#include <catch.hpp>
 
TEST_CASE("TEST_1") {
    REQUIRE('<' == CompLongNumbers("9", "10")());
}
TEST_CASE("TEST_2") {
    REQUIRE('>' == CompLongNumbers("11", "10")());
}
TEST_CASE("TEST_3") {
    REQUIRE('=' == CompLongNumbers("00012345", "12345")());
}
TEST_CASE("TEST_4") {
    REQUIRE('>' == CompLongNumbers("0123", "111")());
}
TEST_CASE("TEST_5") {
    REQUIRE('>' == CompLongNumbers("0123", "9")());
}
