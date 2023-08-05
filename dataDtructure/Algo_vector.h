//
// Created by QSYan on 2023/8/5.
//

#ifndef ALGOLANG_ALGO_VECTOR_H
#define ALGOLANG_ALGO_VECTOR_H

namespace algo {
    template<typename T>
    class Vector {
    private:
        T *_data;
        size_t _size;
        size_t _capacity;
    public:
        Vector() : _data(nullptr), _size(0), _capacity(0) {}
        ~Vector() {
            if (_data != nullptr) {
                delete[] _data;
                _data = nullptr;
            }
        }

        void push_back(const T &val) {
            if (_data == nullptr) {
                _data = new T[1];
                _data[0] = val;
                _size = 1;
                _capacity = 1;
            } else {
                if (_size == _capacity) {
                    _capacity *= 2;
                    T *newData = new T[_capacity];
                    for (int i = 0; i < _size; ++i) {
                        newData[i] = _data[i];
                    }
                    delete[] _data;
                    _data = newData;
                }
                _data[_size++] = val;
            }
        }

        void pop_back() {
            if (_size > 0) {
                _size--;
            }
        }

        T &operator[](size_t index) {
            return _data[index];
        }

        const T &operator[](size_t index) const {
            return _data[index];
        }

        size_t size() const {
            return _size;
        }

        size_t capacity() const {
            return _capacity;
        }

        bool empty() const {
            return _size == 0;
        }

        void clear() {
            _size = 0;
        }

        void resize(size_t newSize) {
            if (newSize > _capacity) {
                _capacity = newSize;
                T *newData = new T[_capacity];
                for (int i = 0; i < _size; ++i) {
                    newData[i] = _data[i];
                }
                delete[] _data;
                _data = newData;
            }
            _size = newSize;
        }

        void reserve(size_t newCapacity) {
            if (newCapacity > _capacity) {
                _capacity = newCapacity;
                T *newData = new T[_capacity];
                for (int i = 0; i < _size; ++i) {
                    newData[i] = _data[i];
                }
                delete[] _data;
                _data = newData;
            }
        }
    };
}
#endif //ALGOLANG_ALGO_VECTOR_H

