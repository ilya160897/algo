#pragma once

#include <cstddef>
#include <iostream>
#include <vector>
#include <utility>
#include <algorithm>

using SegmentEnd = std::pair<int, int>;

class KSegmentsUnion {
public:
    KSegmentsUnion(int k, std::vector<SegmentEnd>& ends) : Ends(ends), K(k) {}

    std::vector<SegmentEnd>& operator()() {
        Init();
        Iterate();
        return Result;
    }
private:
    void Init() {
        std::sort(Ends.begin(), Ends.end());
        Result.reserve(Ends.size());
    }
    void Iterate() {
        for (const auto& end : Ends) {
            if (end.second == 1) {
                --Layers;
                if (Layers == K - 1) {
                    Result.emplace_back(end.first, 1);
                }
                continue;
            }
            ++Layers;
            if (Layers == K) {
                Result.emplace_back(end.first, 0);
            }
        }
    }
private:
    std::vector<SegmentEnd> Result;
    std::vector<SegmentEnd>& Ends;
    int Layers = 0;
    int K;
};

// int main() {
//     int n, m;
//     std::cin >> n >> m;
//     std::vector<SegmentEnd> ends;
//     ends.reserve(2 * n);
//     for (int i = 0; i < n; ++i) {
//         int left, right;
//         std::cin >> left >> right;
//         ends.emplace_back(left, 0);
//         ends.emplace_back(right, 1);
//     }
//     auto solution = KSegmentsUnion(m ,ends);
//     auto& result = solution();
//     std::cout << result.size() / 2 << "\n";
//     for (size_t i = 0; i < result.size(); i += 2) {
//         std::cout << result[i].first << " " << result[i + 1].first << "\n";
//     }
//     return 0;
// }