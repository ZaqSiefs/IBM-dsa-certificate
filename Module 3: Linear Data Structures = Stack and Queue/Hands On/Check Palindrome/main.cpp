//DO NOT CHANGE THE GIVEN CODE TEMPLATE. WRITE YOUR CODE IN THE PROVIDED PLACES ALONE.

#include<iostream>
using namespace std;

class Node {     
      public:
          int data;
         Node *next;
};
class Stack{ 
   public:
       Node *top;
       Stack(){ 
           top=NULL;
        }
        void push(int data);
        int pop();
};

void Stack :: push(int data){
    //Write your code here
    Node* newNode = new Node;
    if(newNode == NULL) {
        std::cout << "Not enough memory for a new node\n";
        return;
    }
    newNode->data = data;
    newNode->next = top;
    top = newNode;
}


int Stack ::pop(){
    //Write your code here 
    if(top == NULL) {
        std::cout << "Stack underflow\n";
        return 0;
    }
    Node* popNode = top;
    top = top->next;
    return popNode->data;
}

int checkPalindrome(Stack stk, int arr[],int size) {
    //Write your code here
    Stack* trav = &stk;
    for(int i = 0; i < size; i++) {
        std::cout << "Popped element:" << trav->top->data << "\n\n";
        if(trav->top->data != arr[i]) {
            return 0;
        }
        trav->top = trav->top->next;
    }
            return 1;
}

      
int main(){
    Stack stk;
    int size,i,data;
        
    cin>>size;
    if(size<2){
        cout<<"Invalid input";
        return 0;
    }
    
    int arr[size];
    for(i=0; i<size; i++){
       cin>>data;
        arr[i]=data;
        stk.push(data);
    }
    
    //Write your code here for calling the 'checkPalindrome()' method
   std::cout << checkPalindrome(stk, arr, size) << "\n";
   
    
    return 0;
 }