//DO NOT CHANGE THE GIVEN CODE TEMPLATE. WRITE YOUR CODE IN THE PROVIDED PLACES ALONE.
//If required, you can add additional functions or header files.

#include <iostream>
#include <string>
// #include<bits/stdc++.h>
using namespace std;

void sortDescending(string* str) {
    for(int i = 0; i < str->length(); i++)
        for(int j = 0; j < str->length() - 1; j++)
            if((*str)[j] < (*str)[j + 1]) {
                char temp = (*str)[j];
                (*str)[j] = (*str)[j + 1];
                (*str)[j + 1] = temp;
            }
}

void sortAscending(string* str) {
    for(int i = 0; i < str->length(); i++)
        for(int j = 0; j < str->length() - 1; j++)
            if((*str)[j] > (*str)[j + 1]) {
                char temp = (*str)[j];
                (*str)[j] = (*str)[j + 1];
                (*str)[j + 1] = temp;
            }
}

void singleWordSort(string* str) {
    string uppercase{}, lowercase{};
    for(int i = 0; i < str->length(); i++) {
        if(std::isupper((*str)[i]))
            uppercase.append(1, (*str)[i]);
        else if(std::islower((*str)[i]))
            lowercase.append(1, (*str)[i]);
        else {
            std::cout << "Invalid string";
            return;
        }
    }
    sortDescending(&uppercase);
    sortAscending(&lowercase);

    str->replace(0, str->length(), uppercase.append(lowercase));
}

int main() { 
    string st;
    cout<<"Enter the String: ";
    cin>>st;
    
    //Write your code here
    string* pSt = &st;
    singleWordSort(pSt);
    std::cout << st;

    return 0;
} 

