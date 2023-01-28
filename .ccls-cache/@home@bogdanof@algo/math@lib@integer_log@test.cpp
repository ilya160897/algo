#include "integer_log.h"
#include <catch.hpp>
#include <climits>
 
TEST_CASE("TEST_1") {
    REQUIRE(31 == IntegerUpperRoughLog<int>(INT_MAX));
}
TEST_CASE("TEST_2") {
    REQUIRE(65 == IntegerUpperRoughLog<size_t>(SIZE_MAX));
}
TEST_CASE("TEST_3") {
    REQUIRE(1 == IntegerUpperRoughLog<int>(1));
}
