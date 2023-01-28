#pragma once

#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_map>
#include <cassert>
#include <cstdio>

using Vec = std::vector<size_t>;

class MultiSetCounter {
public:
    void Insert(size_t i) {
        if (Counts[i]++ == 0) {
            ++Size_;
        }
    }
    void Delete(size_t i) {
        if (--Counts[i] == 0) {
            --Size_;
        }
    }
    size_t Size() const {
        return Size_;
    }
private:
    size_t Size_ = 0;
    std::unordered_map<size_t, size_t> Counts;
};

class LongestKGoodSegment {
public:
    LongestKGoodSegment(size_t k, const Vec& nums) : K(k), Nums(nums) {
        assert(!Nums.empty());
    }

    std::vector<size_t> operator()() {
        Count.Insert(Nums.front());
        while (Right < Nums.size()) {
            MoveRight();
            UpdateResult();
            MoveLeft();
        }
        return {ResultLeft + 1, ResultRight};
    }
private:
    void MoveRight() {
        while (Right < Nums.size() && Count.Size() <= K) {
            Count.Insert(Nums[++Right]);
        }
    }
    void MoveLeft() {
        while (Left < Right && Count.Size() > K) {
            Count.Delete(Nums[Left++]);
        }
    }
    void UpdateResult() {
        if (SegmentLength() > MaxLength) {
            MaxLength = SegmentLength();
            ResultLeft = Left;
            ResultRight = Right;
        }
    }
    size_t SegmentLength() {
        return Right - Left;
    }
private:
    size_t K;
    const Vec& Nums;
private:
    MultiSetCounter Count;
    size_t Left = 0;
    size_t Right = 0;
    size_t MaxLength = 0;
    size_t ResultLeft;
    size_t ResultRight;
};

int mainn() {
    size_t n, m;
    assert(scanf("%zu", &n) == 1);
    assert(scanf("%zu", &m) == 1);
    std::vector<size_t> nums(n);
    for (size_t i = 0; i < n; ++i) {
        assert(scanf("%zu", &nums[i]) == 1);
    }
    auto result = LongestKGoodSegment(m, nums)();
    printf("%zu ", result.front());
    printf("%zu", result.back());
    return 0;
}