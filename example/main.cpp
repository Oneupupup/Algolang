#include <iostream>
#include <vector>
#include "../Algorithm/Algo_sortvec.h"
#include "../Algorithm/Algo_sort.h"


using namespace algo;

int main() {
    int arr[] = {1, 3, 2, 5, 4, 6, 7, 9, 8};
    int n = sizeof(arr) / sizeof(arr[0]);
    bubbleSort(arr, n);
    for (int i = 0; i < n; ++i) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;

    std::vector<int> vec = {1, 3, 2, 5, 4, 6, 7, 9, 8};
    bubbleSort(vec);
    for (int i : vec) {
        std::cout << i << " ";
    }
}