#pragma once

#include <iostream>
#include <vector>
#include <algorithm>
#include <../prim_algorithm/prim_algorithm.h>
#include <../../lca/max_edge_up_to_lca/max_edge_up_to_lca.h>

using Int = long long;

class MstForEachEdge {
public:
    MstForEachEdge(const TGraph& graph) : Graph(graph) {}

    std::vector<Int> operator()(const std::vector<Edge>& edges) {
        InitMST();
        auto solver = MaxEdgeUpToLca(MST, 0);
        for (const auto& edge : edges) {
            Result.push_back(SumWeightsMST - solver(edge.From, edge.To) + edge.Weight);
        }
        return Result;
    }
private:
    void InitMST() {
        MST = PrimAlgorithm(Graph).GetMST();
        SumWeightsMST = 0;
        for (const auto& edges : MST) {
            for (const auto& edge : edges) {
                SumWeightsMST += edge.Weight;
            }
        }
        SumWeightsMST /= 2;
    }
private:
    const TGraph& Graph;
    TTree MST;
    Int SumWeightsMST;
    std::vector<Int> Result;
};

// int main() {
//     Int v, e;
//     std::cin >> v >> e;
//     std::vector<Edge> edges;
//     for (Int i = 0; i < e; ++i) {
//         Int from, to, weight;
//         std::cin >> from >> to >> weight;
//         edges.emplace_back(from - 1, to - 1, weight);
//     }
//     auto graph = GraphInitializer(edges).InitUnordered();
//     auto result = MstForEachEdge(graph)(edges);
//     for (Int weight : result) {
//         std::cout << weight << "\n";
//     }
//     return 0;
// }