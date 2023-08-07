//
// Created by RTT on 2023/8/7.
//

#ifndef ALGOLANG_ALGO_SORT_H
#define ALGOLANG_ALGO_SORT_H


namespace algo {
    void bubbleSort(int *arr, int n) {
        if (arr == nullptr || n <= 0) {
            return;
        }
        for (int i = 0; i < n - 1; ++i) {
            bool flag = false;
            for (int j = 0; j < n - i - 1; ++j) {
                if (arr[j] > arr[j + 1]) {
                    swap(arr[j], arr[j + 1]);
                    flag = true;
                }
            }
            if (!flag) {
                break;
            }
        }
    }

    void selectionSort(int *arr, int n) {
        if (arr == nullptr || n <= 0) {
            return;
        }
        for (int i = 0; i < n - 1; ++i) {
            int minIndex = i;
            for (int j = i + 1; j < n; ++j) {
                if (arr[j] < arr[minIndex]) {
                    minIndex = j;
                }
            }
            if (minIndex != i) {
                swap(arr[i], arr[minIndex]);
            }
        }
    }
}// namespace Algo
#endif //ALGOLANG_ALGO_SORT_H
