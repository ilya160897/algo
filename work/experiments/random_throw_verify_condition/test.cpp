#include "random_throw_verify_condition.h"
#include <catch.hpp>
#include <iostream>
 
extern int gconf_num_xchecks_encountered_upper_bound;
TEST_CASE("TEST_1") {
    for (int i = 0; i < gconf_num_xchecks_encountered_upper_bound; ++i) {
        if (RandomThrowVerifyCondition::Instance()->Evaluate()) {
            std::cout << i << std::endl;
            break;
        }
    } 
}
