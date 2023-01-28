#include "graph.h"
#include <catch.hpp>

TEST_CASE("Adjacenty List, Unordered Graph") {
    AdjacencyLists expected = {
        {Edge{0, 2}, Edge{0, 1}}, 
        {Edge(1, 2), Edge{1, 0}},
        {Edge{2, 1}, Edge(2, 0)}
    };
    auto result = GraphInitializer (
        {{0, 1}, {1, 2}, {2, 0}}
    )
    .InitUnordered();
    REQUIRE(Normalize(expected) == Normalize(result));
}

TEST_CASE("Adjacenty List, Ordered Graph") {
    AdjacencyLists expected = {
        {Edge{0, 1}}, 
        {Edge(1, 2)},
        {Edge(2, 0)}
    };
    auto result = GraphInitializer (
        {{0, 1}, {1, 2}, {2, 0}}
    )
    .InitOrdered();
    REQUIRE(Normalize(expected) == Normalize(result));
}

TEST_CASE("Adjacenty List, Weighted Unordered Graph") {
    AdjacencyLists expected = {
        {Edge{0, 2, 800}, Edge{0, 1, 555}}, 
        {Edge(1, 2, 3535), Edge{1, 0, 555}},
        {Edge{2, 1, 3535}, Edge(2, 0, 800)}
    };
    auto result = GraphInitializer (
        {{0, 1, 555}, {1, 2, 3535}, {2, 0, 800}}
    )
    .InitUnordered();
    REQUIRE(Normalize(expected) == Normalize(result));
}

TEST_CASE("Adjacenty List, Weighted Ordered Graph") {
    AdjacencyLists expected = {
        {Edge{0, 1, 555}}, 
        {Edge(1, 2, 3535)},
        {Edge(2, 0, 800)}
    };
    auto result = GraphInitializer (
        {{0, 1, 555}, {1, 2, 3535}, {2, 0, 800}}
    )
    .InitOrdered();
    REQUIRE(Normalize(expected) == Normalize(result));
}
