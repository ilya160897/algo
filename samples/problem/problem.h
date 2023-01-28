#pragma once

#include <iostream>
#include <vector>
#include <algorithm>

class SolutionClass {
public:
    SolutionClass(int N) : n(N) {}

    int operator()() {
        return n;
    }
private:
private:
    int n;
};

// int main() {
//     int n, m;
//     std::cin >> n >> m;
//     std::vector<int> nums(n);
//     for (int i = 0; i < n; ++i) {
//         std::cin >> nums[i];
//     }
//     std::cout << SolutionClass(m, nums)() << std::endl;
//     return 0;
// }