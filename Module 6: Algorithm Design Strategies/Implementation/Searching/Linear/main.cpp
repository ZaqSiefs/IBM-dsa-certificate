#include <iostream>

int search(int array[], int size, int key) {
    int index{-1};
    for(int i = 0; i < size; i++)
        if(array[i] == key) {
            index = i;
        }
    return index;
}

int main() {
    int array[] = {3, 15, 2, 8, 7, 1, 14, 38, 10, -2, 61, 5};
    int result = search(array, 12, 14);
    if(result >= 0)
        std::cout << "Element found at index [" << result << "]\n";
    else
        std::cout << "Element not found\n";
}