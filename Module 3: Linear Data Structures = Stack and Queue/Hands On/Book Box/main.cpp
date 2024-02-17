//DO NOT CHANGE THE GIVEN CODE TEMPLATE. WRITE YOUR CODE IN THE PROVIDED PLACES ALONE.
//If required, you can add additional functions or header files.

#include <iostream>
#include<string.h>
using namespace std;

class Stack {
    int top;
    public:
       char box[5][10];
       Stack() {
           top = -1;
        }
       void push(char bkNo[]);
       void pop();
       void display();
};

void Stack::push(char bkNo[]) {
    //Write your code here
    if(top >= 4) {
        std::cout << "The box is full\n";
        return;
    }
    strcpy(box[++top],bkNo);
}


void Stack::pop() {
    //Write your code here
    if(top < 0) {
        std::cout << "The box is empty\n";
        return;
    }
    char deleted[10];
    strcpy(deleted, box[top]);
    std::cout << "The book is deleted from the box: " << deleted << "\n";
    top--;
}

void Stack::display(){
    //Write your code here
    if(top < 0) {
        std::cout << "The box is empty\n";
        return;
    }
    std::cout << "The books in the box: ";
    int trav = top;
    for(int i = 0; i <= top; i++) {
        printf("%s ", box[trav--]);
    }
    std::cout << "\n";
}

int main(){
    
    Stack stk;
    char bkNo[10];
    int choice;
    do{
        cout<<"\n1. Insert a book in the box";
        cout<<"\n2. Delete a book from the box";
        cout<<"\n3. Display book box";
        cout<<"\n4. Exit";
        
        cout<<"\nEnter your choice: ";
        cin>>choice;
        
        switch(choice) {
            case 1:
                cout<<"\nEnter the book no.:\n";
                cin>>bkNo;
                stk.push(bkNo);
                break;
                        
            case 2:
                stk.pop();
                break;
                        
            case 3:
                stk.display();
                break;
            case 4:
                return 0;
                
            default:
                cout<<"Invalid option\n";
        }

    }while(true);
    
    return 0;
}
