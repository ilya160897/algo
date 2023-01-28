#include "max_edge_up_to_lca.h"
#include <catch.hpp>
 
/* Tree to find LCA in:
              (0)
              / \
            6/   \5
            /     \
         (1)      (2)
        /  \      / \
     1 /    \2  3/   \4
      /      \  /     \
    (3)     (4)(5)    (6)
*/
    
TEST_CASE("Simple binary") {
    auto graph = GraphInitializer({
        {0, 1, 6},
        {0, 2, 5}, 
        {1, 3, 1},
        {1, 4, 2},
        {2, 5, 3},
        {2, 6, 4}
    })
    .InitUnordered();
    auto finder = MaxEdgeUpToLca(graph, 0);
    REQUIRE(6 == finder(0, 1));
    REQUIRE(5 == finder(0, 5));
    REQUIRE(6 == finder(1, 2));
    REQUIRE(6 == finder(4, 2));
    REQUIRE(6 == finder(1, 6));

    REQUIRE(2 == finder(3, 4));
    REQUIRE(1 == finder(1, 3));

    REQUIRE(4 == finder(6, 5));
    REQUIRE(4 == finder(6, 2));

    REQUIRE(3 == finder(2, 5));
    REQUIRE(2 == finder(1, 4));
}


// //      1       2       3         4       5       6       7       8       9 
// // (0) --- (1) --- (2) --- ((3)) --- (4) --- (5) --- (6) --- (7) --- (8) --- (9)

TEST_CASE("Two Hands") {
    auto graph = GraphInitializer({
        {0, 1, 1},
        {1, 2, 2}, 
        {2, 3, 3},
        {3, 4, 4},
        {4, 5, 5},
        {5, 6, 6},
        {6, 7, 7},
        {7, 8, 8},
        {8, 9, 9}
    })
    .InitUnordered();
    auto finder = MaxEdgeUpToLca(graph, 3);

    for (int i = 0; i < 10; ++i) {
        for (int j = i + 1; j < 10; ++j) {
            REQUIRE(j == finder(i, j));
        }
    }
}

/* Tree to find LCA in:
          ((12))
          / | \
       10/ 9|  \11
        /   |   \
      (10)  (9)  (11)
          / | \ 
        6/ 9|  \8
        /   |   \
     (6)   (7)   (8)_  
          /  \    \   \
        3/    \5   \6   \7
        /      \    \     \
       (2)    (3)   (4)    (5) 
              / \
            1/   \2
            /     \
           (0)     (1)   
*/

TEST_CASE("Bin-ternary") {
    auto graph = GraphInitializer({
        {0, 3, 1},
        {1, 3, 2},
        {2, 7, 3},
        {3, 7, 5},
        {4, 8, 6},
        {5, 8, 7},
        {6, 9, 6},
        {7, 9, 9},
        {8, 9, 8},
        {9, 12, 9},
        {10, 12, 10},
        {11, 12, 11},
    })
    .InitUnordered();
    auto finder = MaxEdgeUpToLca(graph, 12);

    REQUIRE(10 == finder(10, 2));

    for (int i : std::vector<int>{10, 11}) {
        REQUIRE(i == finder(i, 2));
        REQUIRE(i == finder(i, 3));
        REQUIRE(i == finder(i, 0));
        REQUIRE(i == finder(i, 1));
    }

    REQUIRE(9 == finder(8, 2));
    REQUIRE(8 == finder(6, 5));
    REQUIRE(5 == finder(1, 2));
    REQUIRE(9 == finder(6, 2));
    REQUIRE(2 == finder(1, 0));
    REQUIRE(9 == finder(4, 3));
    REQUIRE(5 == finder(3, 7));
    REQUIRE(6 == finder(4, 8));

    REQUIRE(10 == finder(10, 12));
    REQUIRE(11 == finder(9, 11));
    REQUIRE(11 == finder(10, 11));
    REQUIRE(10 == finder(9, 10));
}