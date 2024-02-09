#include <iostream>

int main() {
    int a[50], n, i;
    std::cout << "Enter size of array:\n";
    std::cin >> n;
    std::cout << "Enter elements of array:\n";
    for(i = 0; i < n; i++) {
        std::cin >> a[i];
    }
    std::cout << "Array elements are:\n{";
    for(i = 0; i < n; i++) {
        std::cout << a[i];
        if(i + 1 != n) {
            std::cout << ", ";
        }
    }
    std::cout << "}";
}