#pragma once

#include <iostream>
#include <cstdio>
#include <vector>
#include <algorithm>
#include <string>

class CompLongNumbers {
public:
    CompLongNumbers(const std::string& Left, const std::string& Right) : left(Left), right(Right) {}

    char operator()() {
        Normalize(left, leftIt);
        Normalize(right, rightIt);
        if (left.size() - leftIt < right.size() - rightIt) {
            return '<';
        }
        if (left.size() - leftIt > right.size() - rightIt) {
            return '>';
        }
        for (; leftIt < left.size() && rightIt < right.size(); ++leftIt) {
            if (left[leftIt] < right[rightIt]) {
                return '<';
            }
            if (left[leftIt] > right[rightIt]) {
                return '>';
            }
            ++rightIt;
        }
        return '=';
    }
private:
    void Normalize(const std::string& num, size_t& it) {
        while (it < num.size() && num[it] == '0') {
            ++it;
        }
    }
private:
    size_t leftIt = 0;
    size_t rightIt = 0;
    const std::string& left;
    const std::string& right;
};

// int mainn() {
//     const size_t MAX_SIZE = (2 << 20);

//     char lBuff[MAX_SIZE];
//     char rBuff[MAX_SIZE];

//     scanf("%1000007s", lBuff);
//     scanf("%1000007s", rBuff);   

//     std::string left(lBuff);
//     std::string right(rBuff);

//     std::cout << CompLongNumbers(left, right)() << std::endl;
//     return 0;
// }