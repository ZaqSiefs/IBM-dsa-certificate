#include <iostream>

int main() {
    int a[3][2];
    std::cout<< "Enter the elements of array:\n";
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 2; j++) {
            std::cin >> a[i][j];
        }
    }

    std::cout << "Elements in the array are:\n\n";
    for (int i = 0; i < 3; i++) {
        for(int j = 0; j < 2; j++) {
            if(j == 0) std::cout << i << ": [";
            std::cout << a[i][j];
            if(i < 3 && j < 1) std::cout << ", ";
            if(j == 1) std::cout << "],\n";
        }
    }
    std::cout << "\n";
}