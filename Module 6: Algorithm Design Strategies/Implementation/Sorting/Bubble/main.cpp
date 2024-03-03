#include<iostream>

void bubbleSort(int array[], int n) {
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n - 1; j++)
            if (array[j] > array[j + 1]) {
                int temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
            }
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
    bubbleSort(array, n);
    std::cout << "Sorted list: "; printArray(array, n); std::cout << "\n";
}