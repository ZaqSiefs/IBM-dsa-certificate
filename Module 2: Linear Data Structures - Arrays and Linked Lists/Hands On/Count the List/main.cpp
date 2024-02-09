//PLEASE DO NOT CHANGE THE GIVEN CODE TEMPLATE. WRITE YOUR CODE IN THE PROVIDED PLACES ALONE.

#include <iostream>
using namespace std;

class Node {  
    public:            
        int data; 
        Node* next;
};    

class LinkedList {  
  public:
        Node *head;         
        LinkedList()  {
            head = NULL; 
        }
        void append(int);
        void display();
        int countTheKey(int);
};

void LinkedList :: append(int value)  {
    //Write your code here
    Node* newNode = new Node;
    newNode->data = value;
    newNode->next = NULL;
    if(head == NULL) {
        head = newNode;
        return;
    }
    if(head->next == NULL) {
        head->next = newNode;
        return;
    }
    Node* trav = head;
    while(trav->next != NULL) {
        trav = trav->next;
    }
    trav->next = newNode;
}

void LinkedList :: display() {
    //Write your code here
    Node* trav = head;
    std::cout << "The list is: ";
    while(trav != NULL) {
        std::cout << trav->data << " ";
        trav = trav->next;
    }
    std::cout << "\n";
}
        
int LinkedList :: countTheKey(int key){
    //Write your code here
    int occurences = 0;
    Node* trav = head;
    while(trav != NULL) {
        if(trav->data == key) {
            occurences++;
        }
        trav = trav->next;
    }
    return occurences;
     
}    
    
int main(){
    cout<<"\nEnter the size of the list: ";
    int N,value,key;
    LinkedList lst;
    cin>>N;
    if(N>0){
        for(int i=0;i<N;i++){
            cin>>value;
            lst.append(value);
        }
        cout<<"\n";
        lst.display();
        cout<<"\nEnter the number: ";
        cin>>key;

        int nOfOccurences = lst.countTheKey(key);
        
        //Write your code here
        std::cout << key << " occurs " << nOfOccurences << " times.\n";
        
    }
    else
    cout<<"\nInvalid Input";
    
    return 0;
}
