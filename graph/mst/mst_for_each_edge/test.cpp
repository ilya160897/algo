#include "mst_for_each_edge.h"
#include <catch.hpp>
 
TEST_CASE("Simple binary") {
    std::vector<Edge> edges {
        {0, 1, 3},
        {0, 2, 1},
        {0, 3, 5},
        {1, 2, 2},
        {1, 4, 3},
        {2, 3, 2},
        {3, 4, 4}
    };
    auto graph = GraphInitializer(edges).InitUnordered();
    std::vector<Int> expected {9, 8, 11, 8, 8, 8, 9};
    REQUIRE(expected == MstForEachEdge(graph)(edges));
}
