#include<iostream>

void merge(int array[], int const left, int const mid, int const right) {
    int const subArrayOne = mid - left + 1;
    int const subArrayTwo = right - mid;

    auto *leftArray = new int[subArrayOne];
    auto *rightArray = new int[subArrayTwo];

    for(auto i = 0; i < subArrayOne; i++)
        leftArray[i] = array[left + i];
    for(auto j = 0; j < subArrayTwo; j++)
        rightArray[j] = array[mid + 1 + j];
    
    auto indexOfSubArrayOne = 0;
    auto indexOfSubArrayTwo = 0;
    int indexOfMergedArray = left;

    while(indexOfSubArrayOne < subArrayOne && indexOfSubArrayTwo < subArrayTwo) {
        if(leftArray[indexOfSubArrayOne] <= rightArray[indexOfSubArrayTwo])
            array[indexOfMergedArray++] = leftArray[indexOfSubArrayOne++];
        else 
            array[indexOfMergedArray++] = rightArray[indexOfSubArrayTwo++];
    }

    while(indexOfSubArrayOne < subArrayOne) 
        array[indexOfMergedArray++] = leftArray[indexOfSubArrayOne++];

    while(indexOfSubArrayTwo < subArrayTwo) 
        array[indexOfMergedArray++] = rightArray[indexOfSubArrayTwo++];
    
    delete[] leftArray;
    delete[] rightArray;
}

void mergeSort(int array[], int const begin, int const end) {
    if(begin >= end)
        return;
    
    int mid = begin + (end - begin) / 2;
    mergeSort(array, begin, mid);
    mergeSort(array, mid + 1, end);
    merge(array, begin, mid, end);
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
    mergeSort(array, 0, n - 1);
    std::cout << "Sorted list: "; printArray(array, n); std::cout << "\n";
}