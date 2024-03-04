//DO NOT CHANGE THE GIVEN CODE TEMPLATE. WRITE YOUR CODE IN THE PROVIDED PLACES ALONE.
//If required, you can add additional functions or header files.

#include <iostream>
#include <string.h>
using namespace std;


int main() {
    
    //Write your code here
    // N containers to be loaded into ship
    // capacity = W tons
    // if weight of N are given, find max number of containers that can be loaded
    int nOfContainers{};
    std::cin >> nOfContainers;

    int containers[nOfContainers];
    for(int i = 0; i < nOfContainers; i++) 
        std::cin >> containers[i];

    int maxWeight{};
    std::cin >> maxWeight;

    bool isLoadable[nOfContainers];
    int nOfLoadable{};
    memset(isLoadable, 0, sizeof(isLoadable));
    int currentWeight{};
    for(int i = 0; i < nOfContainers; i++) 
        if(!(currentWeight + containers[i] > maxWeight)) {
            isLoadable[i] = 1;
            nOfLoadable++;
            currentWeight += containers[i];
        }
    
    std::cout << nOfLoadable << "\n";

    std::cout << "[";
    for(int i = 0; i < nOfContainers; i++) {
        std::cout << isLoadable[i];
        if(i + 1 != nOfContainers)
            std::cout << ", ";
    }
    std::cout << "]\n";
    


    return 0;
}