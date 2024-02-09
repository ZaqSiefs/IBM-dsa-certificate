#include <assert.h>
#include <cstring>
#include <iostream>

const int DYNAMIC_ARRAY_INITIAL_CAPACITY = 2;
const int GROWTH_FACTOR = 2;

template <class T>
class dynamicArray {
private:
    T *array;
    int capacity = DYNAMIC_ARRAY_INITIAL_CAPACITY;
    int size;

public:
    dynamicArray() {
        array = new T[capacity];
        size = 0;
    }

    ~dynamicArray() {
        delete[] array;
    }

    void erase(int position) {
        assert(0 <= position && position < size);
        size--;
        for(int i = position; i < size; i++) {
            array[i] = array[i + 1];
        }
    }

    void insert(int data, int position) {
        assert(0 <= position && position <= size);
        if(size == capacity) {
            resize();
        }
        for(int i = size; i > position; i--) {
            array[i] = array[i-1];
        }
        size++;
        array[position] = data;
    }

    void append(T data) {
        insert(data, size);
    }

    void resize() {
        capacity *= GROWTH_FACTOR;
        T *temp = new T[capacity];
        std::copy(array, array + size, temp);
        delete [] array;
        array = temp;
    }

    T get(int position) {
        return array[position];
    }

    void print() {
        std::cout << "[";
        for(int i = 0; i < size - 1; i++) {
            std::cout << array[i];
            if(i != size - 1) std::cout << ", ";
        }
        if(size) std::cout << array[size - 1];
        std::cout << "]\n";
    }
};

int main() {
    dynamicArray<int> A;
    A.append(5);
    A.append(8);
    A.insert(10, 2);
    A.insert(40, 1);
    A.print();

}