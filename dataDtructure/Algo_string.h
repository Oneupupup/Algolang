//
// Created by RTT on 2023/8/2.
//

#ifndef ALGOLANG_ALGO_STRING_H
#define ALGOLANG_ALGO_STRING_H

#include <cstring>

namespace algo {
    class string {
    private:
        char *_data;
        size_t _size;
    public:
        string(char *_data = nullptr) {
            if(_data == nullptr){
                _data = new char[1];
                _data[0] = '\0';
                _size = 0;
            }else{

            }
        }

        string(const string &str)

    };
}// namespace algo

#endif //ALGOLANG_ALGO_STRING_H
