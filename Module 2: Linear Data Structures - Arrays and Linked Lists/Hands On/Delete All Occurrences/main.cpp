//PLEASE DO NOT CHANGE THE GIVEN CODE TEMPLATE. WRITE YOUR CODE IN THE PROVIDED PLACES ALONE.

#include<iostream>
using namespace std;


class Node {
    public:
        //Fill your code here
        int data;
        Node* next;
};


class LinkedList {
   public:
        Node *head;
        LinkedList() {
            head = NULL;
        }
        void append(int value);
        void deleteAllOccurrences(int key);
        void display();
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


void LinkedList :: deleteAllOccurrences(int key){
    //Write your code here
    if(head == NULL) return;
    if(head->next == NULL && head->data == key) {
        delete head;
        head = NULL;
        return;
    }
    Node* delNode = head;
    if(head->data == key) {
        do{
            head = head->next;
            delete delNode;
            delNode = head;
        }
        while(head != NULL && head->data == key);
    }
    Node* trav = head;
    while(trav != NULL) {
        delNode = trav->next;
        while(delNode != NULL && delNode->data == key) {
            trav->next = delNode->next;
            delete delNode;
            delNode = trav->next;
        }
        trav = trav->next;
    }
}

void LinkedList :: display() {
    Node *temp = head;
    cout<<"\nThe list after deletion: ";
    while(temp != NULL) {
        cout<<temp->data << " ";
        temp = temp->next;
    }
}


int main(){
    cout<<"\nEnter the size of the list: ";
    int N,value;
    LinkedList lst;
    cin>>N;
    for(int i=0;i<N;i++){
        cin>>value;
        lst.append(value);
    }
    cout<<"\nEnter the element to be deleted: ";
    int delValue;
    cin>>delValue;
    
    // Write your here here for deleting and displaying the elements in the list
    lst.deleteAllOccurrences(delValue);
    lst.display();
    
    
    
    
    return 0;
}

