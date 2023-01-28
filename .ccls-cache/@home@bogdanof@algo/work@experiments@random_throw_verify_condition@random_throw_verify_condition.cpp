#include <iostream>
#include "random_throw_verify_condition.h"

int gconf_num_xchecks_encountered_upper_bound = 10;
RandomThrowVerifyCondition::~RandomThrowVerifyCondition() { delete instance_; }
RandomThrowVerifyCondition* RandomThrowVerifyCondition::Instance() {
  if (!instance_) {
    instance_ = new RandomThrowVerifyCondition();
  }
  return instance_;
}
RandomThrowVerifyCondition* RandomThrowVerifyCondition::instance_ = nullptr;
RandomThrowVerifyCondition::RandomThrowVerifyCondition(): rng_(rd_()){
  int M = gconf_num_xchecks_encountered_upper_bound;
  rv_iterator_ = 0;
  random_variables_.reserve(M);
  for (int i = 0; i < M; ++i) {
    random_variables_.emplace_back(1.0 / (M - i));
  }
}

bool RandomThrowVerifyCondition::Evaluate() {
  auto& random_variable =
      (rv_iterator_ < gconf_num_xchecks_encountered_upper_bound)
          ? random_variables_[rv_iterator_]
          : random_variables_.back();
  ++rv_iterator_;
  return random_variable(rng_);
}