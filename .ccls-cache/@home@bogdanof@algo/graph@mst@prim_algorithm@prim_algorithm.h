#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
#include <queue>
#include "../../graph/graph.h"

struct EdgeCmp{
    bool operator() (const Edge& left, const Edge right) {
        return left.Weight > right.Weight;
    }
};

using TGraph = AdjacencyLists;
using TPrimPQ = std::priority_queue<Edge, std::vector<Edge>, EdgeCmp>;

// Works only for connected graphs
// Is not aftraid of negative weights
class PrimAlgorithm {
public:
    PrimAlgorithm(const TGraph& graph) 
        : Graph(graph) 
        , Dist(graph.size(), INT_MAX)
        , Used(graph.size(), false)
    {
    }

    TGraph GetMST() {
        BuildMST();
        return GraphInitializer(ResultEdges).InitUnordered();
    }
private:
    void BuildMST() {
        InitPQ();
        while (!PQ.empty()) {
            auto edge = PQ.top(); 
            PQ.pop();
            if (Used[edge.From]) {
                continue;
            }
            Used[edge.From] = true;
            ResultEdges.push_back(edge);
            Relax(edge.From);
        }
    }
    void InitPQ() {
        Dist[0] = 0;
        Used[0] = true;
        Relax(0);
    }
    void Relax(int vertex) {
        for (const Edge& edge : Graph[vertex]) {
            int to = edge.To;
            if (!Used[to] && Dist[to] > edge.Weight) {
                Dist[to] = edge.Weight;
                PQ.push(edge.Backward());
            }
        }
    }
private:
    const TGraph& Graph;
    std::vector<int> Dist;
    TPrimPQ PQ;
    std::vector<bool> Used;
    std::vector<Edge> ResultEdges;
};

// int main() {
//     int n, m;
//     std::cin >> n >> m;
//     std::vector<int> nums(n);
//     for (int i = 0; i < n; ++i) {
//         std::cin >> nums[i];
//     }
//     std::cout << PrimAlgorithm(m, nums)() << std::endl;
//     return 0;
// }