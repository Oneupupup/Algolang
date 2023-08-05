#include <iostream>
#include "../dataDtructure/Algo_vector.h"
#include "../dataDtructure/Algo_string.h"


using namespace algo;

int main() {
    Vector<int> v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);

    for(int i = 0; i < v.size(); ++i) {
        std::cout << v[i] << std::endl;
    }
    String s1("hello");
    String s2 = s1;

    std::cout << s1 << std::endl;
    std::cout << s2 << std::endl;
}