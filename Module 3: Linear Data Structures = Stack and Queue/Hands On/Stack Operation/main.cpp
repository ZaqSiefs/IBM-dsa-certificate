//DO NOT CHANGE THE GIVEN CODE TEMPLATE. WRITE YOUR CODE IN THE PROVIDED PLACES ALONE.

#include<iostream>
using namespace std;
#define MAX 50

class Stack {          
    int top;  
    public: 
      int stk[MAX]; 
      Stack() { 
          top = -1; 
        } 
      void push(int data);
      int findMiddle();
      int pop();
};

void Stack::push(int data) { 
     stk[++top]=data; 
}

int Stack::pop(){ 
     //Write your code here  
    int pop = stk[top];
    top--;
    return pop;
} 

int Stack::findMiddle() { 
    //Write your code here
    return stk[top/2];
} 



int  main() {
        int no;
        Stack st;
        cout<<"\nEnter the number of elements to be pushed into the stack:";
        cin>>no;
        
        //Write your code here
        if(1 > no || no > 50) std::cout << "Invalid input.\n";
        else { 
            int input;
            for(int i = 0; i < no; i++) {
                std::cout << "Enter element " << i + 1 << ":\n";
                std::cin >> input;
                st.push(input);
            }
            std::cout << "The middle element is: " << st.findMiddle() << "\n";
            std::cout << "The popped element is: " << st.pop() << "\n";
        }

    return 0;    
}
