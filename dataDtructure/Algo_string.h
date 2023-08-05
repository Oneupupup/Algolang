//
// Created by RTT on 2023/8/2.
//

#ifndef ALGOLANG_ALGO_STRING_H
#define ALGOLANG_ALGO_STRING_H

#include <cstring>
#include <iostream>

namespace algo {
    class String {
    private:
        char *_data;
        size_t _size;
    public:
        String(char *_data = nullptr) {
            if(_data == nullptr){
                _data = new char[1];
                _data[0] = '\0';
                _size = 0;
            }else{
                _size = strlen(_data);
                this->_data = new char[_size + 1];
                strcpy(this->_data, _data);
            }
            }

        String(const String &str) {
            _size = str._size;
            _data = new char[_size + 1];
            strcpy(_data, str._data);
        }

        ~String() {
            if (_data != nullptr) {
                delete[] _data;
                _data = nullptr;
            }
        }

        String &operator=(const String &str) {
            if (this == &str) {
                return *this;
            }
            if (_data != nullptr) {
                delete[] _data;
                _data = nullptr;
            }
            _size = str._size;
            _data = new char[_size + 1];
            strcpy(_data, str._data);
            return *this;
        }

        String &operator=(const char *str) {
            if (_data != nullptr) {
                delete[] _data;
                _data = nullptr;
            }
            _size = strlen(str);
            _data = new char[_size + 1];
            strcpy(_data, str);
            return *this;
        }

        String operator+(const String &str) {
            String newStr;
            newStr._size = _size + str._size;
            newStr._data = new char[newStr._size + 1];
            strcpy(newStr._data, _data);
            strcat(newStr._data, str._data);
            return newStr;
        }

        String operator+(const char *str) {
            String newStr;
            newStr._size = _size + strlen(str);
            newStr._data = new char[newStr._size + 1];
            strcpy(newStr._data, _data);
            strcat(newStr._data, str);
            return newStr;
        }

        String &operator+=(const String &str) {
            _size += str._size;
            char *newData = new char[_size + 1];
            strcpy(newData, _data);
            strcat(newData, str._data);
            delete[] _data;
            _data = newData;
            return *this;
        }

        String &operator+=(const char *str) {
            _size += strlen(str);
            char *newData = new char[_size + 1];
            strcpy(newData, _data);
            strcat(newData, str);
            delete[] _data;
            _data = newData;
            return *this;
        }

        bool operator==(const String &str) {
            return strcmp(_data, str._data) == 0;
        }

        bool operator==(const char *str) {
            return strcmp(_data, str) == 0;
        }

        bool operator!=(const String &str) {
            return strcmp(_data, str._data) != 0;
        }

        bool operator!=(const char *str) {
            return strcmp(_data, str) != 0;
        }

        friend std::ostream &operator<<(std::ostream &os, const String &str) {
            os << str._data;
            return os;
        }
    };
}// namespace algo

#endif //ALGOLANG_ALGO_STRING_H
