//DO NOT CHANGE THE GIVEN CODE TEMPLATE. WRITE YOUR CODE IN THE PROVIDED PLACES ALONE.

#include<iostream>
using namespace std;

int binarySearch(int arr[], int size, int key) {
    //Fill Your code here
    int index{-1}, start{}, end{size - 1};
    std::cout << "Mid scores: ";
    while(start <= end) {
        int middle{(start + end) / 2};
        if(arr[middle] == key) {
            index = middle + 1;
            std::cout << arr[middle] << " ";
            break;
        }
        else if(arr[middle] > key)
            end = middle - 1;
        else 
            start = middle + 1;
        std::cout << arr[middle] << " ";
        middle = (start + end) / 2;
    }
    std::cout << "\n";
    return index;  //Change the return value as per the problem statement
}


int main() {
    cout<<"Enter the number of teams:";
    int no,score,result;
    cin>>no;
    int teams[no];
    cout<<"Enter the score:\n";
    for(int idx = 0; idx < no; idx++) {
        cin>>teams[idx];
    }
    cout<<"Enter the score to be searched:";
    cin>>score;
        
    //Fill your code here
    int teamScoreIndex = binarySearch(teams, no, score);
    if(teamScoreIndex == -1)
        std::cout << "Score not found\n";
    else 
        std::cout << "Score found for team " << teamScoreIndex << "\n";
    
        
    return 0;
}
   
