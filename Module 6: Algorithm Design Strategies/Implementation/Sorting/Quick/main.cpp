#include<iostream>

namespace mine {
    int partition(int array[], int leftIndex, int rightIndex) {
        int pivot = array[leftIndex];
        int count{};
        for(int i = leftIndex + 1; i <= rightIndex; i++)
            if(array[i] <= pivot)
                count++;

        int pivotIndex = leftIndex + count;
        std::swap(array[pivotIndex], array[leftIndex]);

        int i = leftIndex, j = rightIndex;
        while(i < pivotIndex && j > pivotIndex) {
            while(array[i] <= pivot) 
                i++;
            while(array[j] > pivot)
                j++;
            if(i < pivotIndex && j > pivotIndex) 
                std::swap(array[i++], array[j--]);
        }

        return pivotIndex;
    }

    void quickSort(int array[], int leftIndex, int rightIndex) {
        if (leftIndex >= rightIndex)
            return;
        
        int p = mine::partition(array, leftIndex, rightIndex);
        mine::quickSort(array, leftIndex, p - 1);
        mine::quickSort(array, p + 1, rightIndex);
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


    std::cout << "Original list: "; mine::printArray(array, n); std::cout << "\n";
    mine::quickSort(array, 0, n - 1);
    std::cout << "Sorted list: "; mine::printArray(array, n); std::cout << "\n";
}