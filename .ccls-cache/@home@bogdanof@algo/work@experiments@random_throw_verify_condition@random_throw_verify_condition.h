#pragma once

#include <random>
#include <vector>

class RandomThrowVerifyCondition {
 public:
  static RandomThrowVerifyCondition* Instance();
  bool Evaluate();

 protected:
  RandomThrowVerifyCondition();
  ~RandomThrowVerifyCondition();

 private:
  static RandomThrowVerifyCondition* instance_;
  std::vector<std::bernoulli_distribution> random_variables_;
  // Random variable iterator
  int rv_iterator_;
  std::random_device rd_;
  std::mt19937 rng_;
};


// int main() {
//     int n, m;
//     std::cin >> n >> m;
//     std::vector<int> nums(n);
//     for (int i = 0; i < n; ++i) {
//         std::cin >> nums[i];
//     }
//     std::cout << RandomThrowVerifyCondition(m, nums)() << std::endl;
//     return 0;
// }