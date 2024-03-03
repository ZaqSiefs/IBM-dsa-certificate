#include<iostream>

bool binarySearch(int array[], int key, int low, int high) {
    int middle = (low + high) / 2;
    while(low <= high) {
        if(array[middle] == key)
            return true;
        else if(array[middle] < key)
            low = middle + 1;
        else
            high = middle - 1;
        middle = (low + high)/2;
    }   
    return false;
}

int main() {
    int array[10], key{};
    std::cout << "Enter 10 elements in ascending order: ";
    for(int i = 0; i < 10; i++)
        std::cin >> array[i];
    std::cout << "Enter element to be searched: ";
    std::cin >> key;
    bool result = binarySearch(array, key, 0, 5);
    if(result)
        std::cout << "Element Found\n";
    else
        std::cout << "Element Not Found\n";
}