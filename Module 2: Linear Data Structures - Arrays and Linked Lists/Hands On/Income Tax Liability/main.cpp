//PLEASE DO NOT CHANGE THE GIVEN CODE TEMPLATE. WRITE YOUR CODE IN THE PROVIDED PLACES ALONE.

#include <iostream>
using namespace std;


int main(){   //DO NOT change the 'main()' signature
    
    //Write your code here
    int nOfSources = 0;
    std::cout << "Enter the no. of income sources:";
    std::cin >> nOfSources;
    std::cout << "\n";
    int sources[nOfSources];
    std::cout << " Enter the income from various sources:\n\n";
    for(int i = 0; i < nOfSources; i++) {
        std::cin >> sources[i];
        std::cout << "\n";
    }
    int nOfTaxableIncomes = 0;
    for(int i = 0; i < nOfSources; i++) {
        if(sources[i] > 9950) {
            nOfTaxableIncomes++;
        }
    }
    if(nOfTaxableIncomes < 1) {
        std::cout << "Not liable to pay income tax\n";
    } else {
        std::cout << "No. of taxable income(s): " << nOfTaxableIncomes << "\n";
    }
    
    return 0;
}
