#include <iostream>

using longint = long long;

class AlmostIdentityPermutations {
public:
    AlmostIdentityPermutations(longint N, longint K) : n(N), k(K) {}

    longint operator()() {
        switch (k) {
            case 1:
                return g0();
            case 2:
                return g0() + g2();
            case 3:
                return g0() + g2() + g3();
            case 4:
                return g0() + g2() + g3() + g4();
            default:
                return 0;
        }
    }
private:
    longint g0() const {
        return 1;
    }
    longint g2() const {
        return n * (n - 1) / 2;
    }
    longint g3() const {
        return n * (n - 1) * (n - 2) / 3;
    }
    longint g4() const {
        return (n * (n - 1) * (n - 2) * (n - 3) / 24) * 9;
    }
private:
    longint n;
    longint k;
};

// int main() {
//     longint n, k;
//     std::cin >> n >> k;
//     std::cout << AlmostIdentityPermutations(n, k)() << std::endl;
// }