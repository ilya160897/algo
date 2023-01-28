#pragma once

#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
#include <queue>
#include "../../graph/graph.h"
#include "../../../math/lib/integer_log/integer_log.h"

using TTree = AdjacencyLists;

class BinaryLifting {
public:
    BinaryLifting(const TTree& graph, int root) 
        : V(graph.size())
        , LOG_V_INC(1 + IntegerUpperRoughLog(graph.size()))
        , Graph(graph)
        , Root(root) 
        , Used(V, false)
        , Parent(V, Root)
        , Depth(V, INT_MIN)
        , ParentStep2Pow(V, std::vector<int>(LOG_V_INC, Root))
    {
        InitParents();
        InitParentStep2Pow();
    }

    int operator()(int left, int right) {
        return GetLCA(left, right);
    }
private:
    int GetLCA(int left, int right) {
        if (Depth[left] > Depth[right]) {
            std::swap(left, right);
        }
        auto depthDiff= Depth[right] - Depth[left];
        if (depthDiff > 0) {
            right = StepUpN(right, depthDiff);
        }
        return GetLCAFromEqualDepth(left, right);
    }

    int GetLCAFromEqualDepth(int left, int right) {
        if (left == right) {
            return right;
        }
        for (int i = LOG_V_INC - 1; i >= 0; --i) {
            auto stepLeft = ParentStep2Pow[left][i];
            auto stepRight = ParentStep2Pow[right][i];
            if (stepLeft == stepRight) {
                continue;
            }
            left = stepLeft;
            right = stepRight;
        }
        return Parent[right];
    }
 private:
    int StepUpN(int vertex, int N) {
        int pow = 0;
        while (N > 0) {
            if (N % 2 == 1) {
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
            }
        }
    }
    void InitParents() {
        Parent[Root] = Root;
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
        for (auto [from, to, _] : Graph[vertex]) {
            if (Used[to]) {
                continue;
            }
            Parent[to] = from;
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
private:
    std::queue<int> ParentBFSQueue;
};

// int main() {
//     int n, m;
//     std::cin >> n >> m;
//     std::vector<int> nums(n);
//     for (int i = 0; i < n; ++i) {
//         std::cin >> nums[i];
//     }
//     std::cout << BinaryLifting(m, nums)() << std::endl;
//     return 0;
// }