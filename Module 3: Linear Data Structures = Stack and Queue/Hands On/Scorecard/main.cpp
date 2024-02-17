//DO NOT CHANGE THE GIVEN CODE TEMPLATE. WRITE YOUR CODE IN THE PROVIDED PLACES ALONE.
//If required, you can add additional functions or header files.

#include<iostream>
#include<stack>
using namespace std;

void runScorecard() {
    int nHurdles{};
    std::cout << "Enter the no. of hurdles: ";
    std::cin >> nHurdles;
    std::cout << "\n";
    if(nHurdles <= 0 || 100 < nHurdles ) {
        std::cout << "Invalid no. of hurdles\n";
        return;
    }

    int height{};
    int lastFive1{}, lastFive2{}, lastFive3{}, lastFive4{}, lastFive5{};
    for(int i = 0; i < nHurdles; i++) {
        std::cout << "Enter the hurdle height " << i + 1 << ": ";
        std::cin >> height;

        if(i >= 4) lastFive5 = lastFive4;
        if(i >= 3) lastFive4 = lastFive3;
        if(i >= 2) lastFive3 = lastFive2;   
        if(i >= 1) lastFive2 = lastFive1;      
        lastFive1 = height;
    }

    std::cout << "Latest hurdle race scores are: ";
    if(nHurdles >= 5) std::cout << lastFive5 << " ";
    if(nHurdles >= 4) std::cout << lastFive4 << " ";
    if(nHurdles >= 3) std::cout << lastFive3 << " ";
    if(nHurdles >= 2) std::cout << lastFive2 << " ";
    std::cout << lastFive1;
    std::cout << "\n";

    return;
}



int main(){
    //Write your code here
    
    runScorecard();
    return 0;
}

