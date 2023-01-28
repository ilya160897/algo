#pragma once

#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>

using VVec = std::vector<std::vector<int>>;
using Vec = std::vector<int>;
class DinnerWithNatasha {
public:
    DinnerWithNatasha(const VVec& nums) : Nums(nums) {}

    int operator()() {
        return GetMaxiMin();
    }
private:
    int GetMaxiMin() const {
        int result = INT_MIN;
        for (const auto& vec : Nums) {
            int min = *std::min_element(vec.begin(), vec.end());
            result = std::max(min, result);
        }
        return result;
    }
private:
    const VVec& Nums;
};

// int main() {
//     int n, m;
//     std::cin >> n >> m;
//     VVec nums(n);
//     for (int i = 0; i < n; ++i) {
//         nums[i].resize(m);
//         for (int j = 0; j < m; ++j) {
//             std::cin >> nums[i][j];
//         }
//     }
//     std::cout << DinnerWithNatasha(nums)() << std::endl;
//     return 0;
// }