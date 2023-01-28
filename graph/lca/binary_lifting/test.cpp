#include "binary_lifting.h"
#include <catch.hpp>
 
/* Tree to find LCA in:
            0
          /   \
         1     2
        / \   / \
       3   4 5   6
*/
    
TEST_CASE("Simple binary") {
    auto graph = GraphInitializer({
        {0, 1},
        {0, 2}, 
        {1, 3},
        {1, 4},
        {2, 5},
        {2, 6}
    })
    .InitUnordered();
    auto finder = BinaryLifting(graph, 0);
    REQUIRE(0 == finder(0, 1));
    REQUIRE(0 == finder(0, 5));
    REQUIRE(0 == finder(1, 2));
    REQUIRE(0 == finder(4, 2));
    REQUIRE(0 == finder(1, 6));

    REQUIRE(1 == finder(3, 4));
    REQUIRE(1 == finder(1, 3));

    REQUIRE(2 == finder(6, 5));
    REQUIRE(2 == finder(6, 2));

    REQUIRE(6 == finder(6, 6));
    REQUIRE(3 == finder(3, 3));
}



// 0 -- 1 -- 2 -- (3) -- 4 -- 5 -- 6 -- 7 -- 8 -- 9

TEST_CASE("Two Hands") {
    auto graph = GraphInitializer({
        {0, 1},
        {1, 2}, 
        {2, 3},
        {3, 4},
        {4, 5},
        {5, 6},
        {6, 7},
        {7, 8},
        {8, 9}
    })
    .InitUnordered();
    auto finder = BinaryLifting(graph, 3);
    REQUIRE(3 == finder(0, 4));
    REQUIRE(3 == finder(1, 5));
    REQUIRE(3 == finder(3, 4));
    REQUIRE(3 == finder(2, 9));

    for (int i = 0; i < 4; ++i) {
        for (int j = i; j < 4; ++j) {
            REQUIRE(std::max(i, j) == finder(i, j));
        }
    }
    for (int i = 3; i < 10; ++i) {
        for (int j = i; j < 10; ++j) {
            REQUIRE(std::min(i, j) == finder(i, j));
        }
    }
}

/* Tree to find LCA in:
            12
          / | \
         9  10 11
          / | \
         6  7  8   
          / |  | \
         2  3  4  5 
              / \
             0   1   
*/

TEST_CASE("Bin-ternary") {
    auto graph = GraphInitializer({
        {0, 4},
        {1, 4}, 
        {2, 7},
        {3, 7},
        {4, 8},
        {5, 8},
        {6, 10},
        {7, 10},
        {8, 10},
        {9, 12},
        {10, 12},
        {11, 12}
    })
    .InitUnordered();
    auto finder = BinaryLifting(graph, 12);
    REQUIRE(12 == finder(10, 12));
    REQUIRE(12 == finder(9, 11));
    REQUIRE(12 == finder(10, 11));
    REQUIRE(12 == finder(9, 10));

    for (int i : std::vector<int>{9, 11}) {
        REQUIRE(12 == finder(i, 2));
        REQUIRE(12 == finder(i, 3));
        REQUIRE(12 == finder(i, 0));
        REQUIRE(12 == finder(i, 1));
    }

    for (int i : std::vector<int>{6, 7}) {
        REQUIRE(10 == finder(i, 4));
        REQUIRE(10 == finder(i, 5));
        REQUIRE(10 == finder(i, 0));
        REQUIRE(10 == finder(i, 1));
    }

    REQUIRE(8 == finder(8, 4));
    REQUIRE(8 == finder(5, 8));
    REQUIRE(8 == finder(5, 0));
    REQUIRE(8 == finder(5, 1));
}