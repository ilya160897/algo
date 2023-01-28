#pragma once

#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
#include <climits>
#include "../../graph/graph.h"
#include "../../../math/lib/integer_log/integer_log.h"

using TTree = AdjacencyLists;

class MaxEdgeUpToLca {
public:
    MaxEdgeUpToLca(const TTree& graph, int root) 
        : V(graph.size())
        , LOG_V_INC(1 + IntegerUpperRoughLog(graph.size()))
        , Graph(graph)
        , Root(root) 
        , Used(V, false)
        , Parent(V, Root)
        , Depth(V, INT_MIN)
        , ParentStep2Pow(V, std::vector<int>(LOG_V_INC, Root))
        , MaxEdgeStep2Pow(V, std::vector<int>(LOG_V_INC, INT_MIN))
    {
        InitParents();
        InitParentStep2Pow();
    }

    int operator()(int left, int right) {
        Maxx = INT_MIN;
        GetLCA(left, right);
        return Maxx;
    }
private:
    void GetLCA(int left, int right) {
        if (Depth[left] > Depth[right]) {
            std::swap(left, right);
        }
        auto depthDiff= Depth[right] - Depth[left];
        if (depthDiff > 0) {
            right = StepUpN(right, depthDiff);
        }
        GetLCAFromEqualDepth(left, right);
    }

    void GetLCAFromEqualDepth(int left, int right) {
        if (left == right) {
            return;
        }
        for (int i = LOG_V_INC - 1; i >= 0; --i) {
            auto stepLeft = ParentStep2Pow[left][i];
            auto stepRight = ParentStep2Pow[right][i];
            if (stepLeft == stepRight) {
                continue;
            }
            Maxx = std::max({Maxx, MaxEdgeStep2Pow[left][i], MaxEdgeStep2Pow[right][i]});
            left = stepLeft;
            right = stepRight;
        }
        Maxx = std::max({Maxx, MaxEdgeStep2Pow[right][0], MaxEdgeStep2Pow[left][0]});
    }
 private:
    int StepUpN(int vertex, int N) {
        int pow = 0;
        while (N > 0) {
            if (N % 2 == 1) {
                Maxx = std::max(Maxx, MaxEdgeStep2Pow[vertex][pow]);
                vertex = ParentStep2Pow[vertex][pow];
            }
            ++pow;
            N /= 2;
        }
        return vertex;
    }
    void InitParentStep2Pow() {
        for (size_t i = 0; i < V; ++i) {
            ParentStep2Pow[i][0] = Parent[i];
        }
        for (size_t j = 1; j < LOG_V_INC; ++j) {
            for (size_t i = 0; i < V; ++i) {
                ParentStep2Pow[i][j] = ParentStep2Pow[ParentStep2Pow[i][j - 1]][j - 1];
                MaxEdgeStep2Pow[i][j] = std::max(
                    MaxEdgeStep2Pow[i][j - 1],
                    MaxEdgeStep2Pow[ParentStep2Pow[i][j - 1]][j - 1]
                );
            }
        }
    }
    void InitParents() {
        Parent[Root] = Root;
        MaxEdgeStep2Pow[Root][0] = INT_MIN;
        Depth[Root] = 0;
        Used[Root] = true;
        ParentBFSQueue.push(Root);

        while(!ParentBFSQueue.empty()) {
            auto v = ParentBFSQueue.front();
            ParentBFSQueue.pop();
            Burn(v);
        }
    }
    void Burn(int vertex) {
        for (auto [from, to, weight] : Graph[vertex]) {
            if (Used[to]) {
                continue;
            }
            Parent[to] = from;
            MaxEdgeStep2Pow[to][0] = weight;
            Depth[to] = 1 + Depth[from];
            Used[to] = true;
            ParentBFSQueue.push(to);
        }
    }
private:
    size_t V;
    size_t LOG_V_INC;
    const TTree& Graph;
    int Root;
    std::vector<bool> Used;
    std::vector<int> Parent;
    std::vector<int> Depth;
    std::vector<std::vector<int>> ParentStep2Pow;
    std::vector<std::vector<int>> MaxEdgeStep2Pow;
private:
    int Maxx;
    std::queue<int> ParentBFSQueue;
};