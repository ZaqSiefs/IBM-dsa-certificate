//DO NOT CHANGE THE GIVEN CODE TEMPLATE. WRITE YOUR CODE IN THE PROVIDED PLACES ALONE.
//If required, you can add additional functions or header files.

// #include<bits/stdc++.h>
#include <iostream>
using namespace std;

int main(){
    
    //Write your code here
    std::cout << "Enter the number of items: ";
    int nOfItems{};
    std::cin >> nOfItems;

    if(nOfItems <= 0) {
        std::cout << "Invalid input\n";
    } else {
        std::cout << "Enter the weight and value of the items:\n";
        int items[nOfItems][2];
        for(int i = 0; i < nOfItems; i++)
            for(int j = 0; j < 2; j++) 
                std::cin >> items[i][j];

        std::cout << "Enter the size of the knapsack: ";
        int size{};
        std::cin >> size;

        int totalValue{};
        for(int i = 0; i <= nOfItems; i++) 
            if(items[i][0] < 60 && totalValue < items[i][0])
                totalValue = items[i][1];
        

        std::cout << "The total value is: " << totalValue << "\n";
    }

    return 0;
}
