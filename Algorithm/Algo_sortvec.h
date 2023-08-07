//
// Created by RTT on 2023/8/7.
//

#ifndef ALGOLANG_ALGO_SORTVEC_H
#define ALGOLANG_ALGO_SORTVEC_H

#include <vector>

namespace algo{
    void swap(int &a, int &b) {
        int temp = a;
        a = b;
        b = temp;
    }

    void bubbleSort(std::vector<int> &vec) {
        if (vec.empty()) {
            return;
        }
        for (int i = 0; i < vec.size() - 1; ++i) {
            bool flag = false;
            for (int j = 0; j < vec.size() - i - 1; ++j) {
                if (vec[j] > vec[j + 1]) {
                    swap(vec[j], vec[j + 1]);
                    flag = true;
                }
            }
            if (!flag) {
                break;
            }
        }
    }

    void selectionSort(std::vector<int> &vec) {
        if (vec.empty()) {
            return;
        }
        for (int i = 0; i < vec.size() - 1; ++i) {
            int minIndex = i;
            for (int j = i + 1; j < vec.size(); ++j) {
                if (vec[j] < vec[minIndex]) {
                    minIndex = j;
                }
            }
            if (minIndex != i) {
                swap(vec[i], vec[minIndex]);
            }
        }
    }
}
#endif //ALGOLANG_ALGO_SORTVEC_H
