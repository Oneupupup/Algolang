#include <iostream>
#include "../Algorithm/Algo_memset.h"

using namespace algo;

int main() {
    int a[10];
    algo::memset(a, 0, sizeof(a));
    for (int i = 0; i < 10; ++i) {
        std::cout << a[i] << " ";
    }
    std::cout << std::endl;
    return 0;

}