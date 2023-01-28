// tests.cpp
#include "get_path_file_line.h"
#include <catch.hpp>

bool EndsWith(const std::string& fullString, const std::string& ending) {
    size_t fullSize = fullString.size();
    size_t endingSize = ending.size();
    if (fullSize < endingSize) {
        return false;
    }
    return fullString.compare(fullSize - endingSize, endingSize, ending) == 0;
}

TEST_CASE("GetCwd") {
    REQUIRE("/local/home/bogdanof/algo" == GetCwd()());
}

TEST_CASE("CurrentPath") {
    REQUIRE("/local/home/bogdanof/algo" == CurrentPath()());
}
