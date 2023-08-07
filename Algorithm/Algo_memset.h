//
// Created by QSYan on 2023/8/8.
//

#ifndef ALGOLANG_ALGO_MEMSET_H
#define ALGOLANG_ALGO_MEMSET_H

#include <cstring>

namespace algo {
    void *memset(void *s, int c, size_t n) {
        if (s == nullptr || n <= 0) {
            return nullptr;
        }

#ifdef __cplusplus
        char *p = static_cast<char *>(s);
#else
        char *p = (char *) s;
#endif
        while (n--) {
#ifdef __cplusplus
            *p++ = static_cast<char>(c);
#else
            *p++ = (char) c;
#endif
        }
        return s;
    }
}

#endif //ALGOLANG_ALGO_MEMSET_H
