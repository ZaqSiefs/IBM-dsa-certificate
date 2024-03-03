#include<iostream>

void insertionSort(int array[], int n) {
    for(int i = 0; i < n; i++) {
        int item = array[i];
        int j = i;
        while(j > 0 && array[j - 1] > item) {
            array[j] = array[j - 1];
            j = j - 1;
        }
        array[j] = item;
    }
}

void printArray(int array[], int n) {
    std::cout << "{";
    for(int i = 0; i < n; i++) {
        std::cout << array[i];
        if(i + 1 != n)
            std::cout << ", ";
    }
    std::cout << "}";
}

int main() {
    int n{};
    std::cout << "Enter the number of elements in list: ";
    std::cin >> n;

    int array[n];
    for(int i = 0; i < n; i++) {
        std::cout << "Enter element " << i << ": ";
        std::cin >> array[i];
    }


    std::cout << "Original list: "; printArray(array, n); std::cout << "\n";
    insertionSort(array, n);
    std::cout << "Sorted list: "; printArray(array, n); std::cout << "\n";
}