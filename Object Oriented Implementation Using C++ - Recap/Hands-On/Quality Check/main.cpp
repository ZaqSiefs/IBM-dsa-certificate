#include <iostream>
using namespace std;

int main()
{
    int i,n=0;
    
    cout<<"Enter the number of eggs"<<endl;
    cin>>n;
    
    float weight[n];
    cout<<"Enter the weight of the eggs(in grams)"<<endl;
    int idealWeight = 0, faultyWeight = 0, nonIdealWeight = 0;
    for (i=0;i<n;i++)
    {
        cin>>weight[i];
        if(weight[i] < 50) {
            faultyWeight++;
            if(faultyWeight > 4) {
                std::cout << "The box contains more than four faulty eggs\n";
                break;
            }
        }
        else if(weight[i] > 70) nonIdealWeight++;
        else idealWeight++;
    }
    std::cout << "Count of eggs with ideal weight=" << idealWeight << "\n";
    std::cout << "Count of eggs with non-ideal weight=" << nonIdealWeight << "\n";
    std::cout << "Count of eggs with faulty weight=" << faultyWeight << "\n";
    return 0;
}

