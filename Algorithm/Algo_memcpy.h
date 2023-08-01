//
// Created by QSYan on 2023/8/2.
//

#ifndef ALGOLANG_ALGO_MEMCPY_H
#define ALGOLANG_ALGO_MEMCPY_H

#include <iostream>

namespace algo {
    void *memcpy(void *dest, const void *src, size_t n) {
        if (dest == nullptr || src == nullptr) {
            return nullptr;
        }

        char *pDest = (char *) dest;
        char *pSrc = (char *) src;

        while (n--) {
            *pDest++ = *pSrc++;
        }
        return dest;
    }
}// namespace algo

#endif //ALGOLANG_ALGO_MEMCPY_H
