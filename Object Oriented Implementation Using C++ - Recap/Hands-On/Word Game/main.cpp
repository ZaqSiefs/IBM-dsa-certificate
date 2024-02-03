#include<iostream>
using namespace std;
#include<string.h>

void validate(char* string, size_t length) {
    if(length % 2 != 0) {
        std::cout << string << " is a incorrect input\n";
        return;
    }

    for(int i = 0; i < length; i++) {
        int temp = 0;
        for(int j = 0; j < length; j++) {
            if(string[i] == string[j]) {
                temp++;
            }
        }
        if(temp != 2) {
            std::cout << string << " is not a valid string\n";
            return;
        }
    }
    std::cout << string << " is a valid string\n";
}

int main()
{
    char text[20];
    cout<<"Enter the string:";
    cin>>text;

    //Fill the code here
    
    size_t length = strlen(text);
    validate(text, length);

}


