#pragma once

#include <cmath>

template<typename T>
T IntegerUpperRoughLog(T num) {
    return 1 + static_cast<T>(std::log2(num));
};
