#include "prim_algorithm.h"
#include <catch.hpp>
 
// https://ru.wikipedia.org/wiki/%D0%90%D0%BB%D0%B3%D0%BE%D1%80%D0%B8%D1%82%D0%BC_%D0%9F%D1%80%D0%B8%D0%BC%D0%B0#%D0%9F%D1%80%D0%B8%D0%BC%D0%B5%D1%80

TEST_CASE("Simple K4") {
    AdjacencyLists mstExpected = {
    {
        Edge{0, 1}, 
        Edge{0, 2},
        Edge{0, 3},
    },
    {
        Edge{1, 0}
    },
    {
        Edge{2, 0}
    },
    {
        Edge{3, 0}
    }
    };
    auto graph = GraphInitializer({
        {0, 1, 1}, 
        {0, 2, 2}, 
        {0, 3, 3},
        {1, 2, 30},
        {1, 3, 40},
        {2, 3, 50}
    })
    .InitUnordered();
    auto result = PrimAlgorithm(graph).GetMST();
    REQUIRE(Normalize(mstExpected) == Normalize(result));
}

// https://www.hackerearth.com/practice/algorithms/graphs/minimum-spanning-tree/tutorial/
TEST_CASE("5 vertices") {
    AdjacencyLists mstExpected = {
    {
        Edge{0, 1}
    },
    {
        Edge{1, 0},
        Edge{1, 2},
        Edge{1, 4}
    },
    {
        Edge{2, 1}
    },
    {
        Edge{3, 4}
    },
    {
        Edge{4, 1},
        Edge{4, 3}
    }
    };
    auto graph = GraphInitializer({
        {0, 1, 1}, 
        {0, 2, 7}, 
        {1, 2, 5},
        {1, 3, 4},
        {1, 4, 3},
        {2, 4, 6},
        {3, 4, 2}
    })
    .InitUnordered();
    auto result = PrimAlgorithm(graph).GetMST();
    REQUIRE(Normalize(mstExpected) == Normalize(result));
}

TEST_CASE("Wikipedia") {
    AdjacencyLists mstExpected = {
    {
        Edge{0, 1}, 
        Edge{0, 3}
    }, 
    {
        Edge(1, 0), 
        Edge{1, 4}
    },
    {
        Edge{2, 4}
    },
    {
        Edge{3, 0},
        Edge{3, 5}
    },
    {
        Edge{4, 1},
        Edge{4, 2},
        Edge{4, 6}
    },
    {
        Edge{5, 3}
    },
    {
        Edge{6, 4}
    },

    };
    auto graph = GraphInitializer({
        {0, 1, 7}, 
        {0, 3, 5}, 
        {1, 2, 8},
        {1, 3, 9},
        {1, 4, 7},
        {2, 4, 5},
        {3, 4, 15},
        {3, 5, 6},
        {4, 5, 8},
        {4, 6, 9},
        {5, 6, 11}
    })
    .InitUnordered();
    auto result = PrimAlgorithm(graph).GetMST();
    REQUIRE(Normalize(mstExpected) == Normalize(result));
}
