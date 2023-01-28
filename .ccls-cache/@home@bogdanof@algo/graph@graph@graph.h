#pragma once
#include <vector>
#include <utility>
#include <algorithm>
#include <sstream>
#include <vector>

using WeightType = int;

struct Edge {
    Edge(int from, int to, int weight = 1) 
        : From(from)
        , To(to)
        , Weight(weight)
    {
    }
    bool operator==(const Edge& other) const {
        return From == other.From && To == other.To;
    }
    bool operator<(const Edge& other) const {
        if (From == other.From) {
            return To < other.To;
        }
        return From < other.From;
    }
    Edge Backward() const {
        return Edge(To, From, Weight);
    }
    int From;
    int To;
    int Weight = 1;
};

std::ostream& operator<<(std::ostream& os, const Edge& edge);

using AdjacencyLists = std::vector<std::vector<Edge>>;

AdjacencyLists& Normalize(AdjacencyLists& adjacencyList);

class GraphInitializer {
public:
    GraphInitializer(const std::vector<Edge>& edges) : edges(edges) {}
    AdjacencyLists InitUnordered() {
        InitOrdered();
        InitEdgesBackward();
        return adjacencyLists;
    }
    AdjacencyLists InitOrdered() {
        int numVertices = GetNumVertices();
        adjacencyLists.resize(numVertices, {});
        InitEdgesForward();
        return adjacencyLists;
    }
private:
    void InitEdgesForward() {
        for (const auto& [from, to, weight] : edges) {
            adjacencyLists[from].emplace_back(from, to, weight);
        }
    }
    void InitEdgesBackward() {
        for (const auto& [from, to, weight] : edges) {
            adjacencyLists[to].emplace_back(to, from, weight);
        }
    }
    int GetNumVertices() {
        auto maxEdge = std::max_element(edges.begin(), edges.end(), 
            [](const Edge& left, const Edge& right) {
            return std::max(left.From, left.To) < std::max(right.From, right.To);
        });
        return 1 + std::max(maxEdge->From, maxEdge->To);
    }
private:
    const std::vector<Edge>& edges;
    AdjacencyLists adjacencyLists;
};
