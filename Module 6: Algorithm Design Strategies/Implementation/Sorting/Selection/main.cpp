#include <iostream>

void selectionSort(int list[], int n) {
    for(int i = 0; i < n; i++) {
        int min = i;
        for(int j = i + 1; j < n; j++) {
            if (list[j] < list[min])
                min = j;   
        }
        if (min != i) {
            int temp = list[min];
            list[min] = list[i];
            list[i] = temp;
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

int main(void) {
    int n{};
    std::cout << "Enter the number of elements in list: ";
    std::cin >> n;

    int array[n];
    for(int i = 0; i < n; i++) {
        std::cout << "Enter element " << i << ": ";
        std::cin >> array[i];
    }


    std::cout << "Original list: "; printArray(array, n); std::cout << "\n";
    selectionSort(array, n);
    std::cout << "Sorted list: "; printArray(array, n); std::cout << "\n";
}