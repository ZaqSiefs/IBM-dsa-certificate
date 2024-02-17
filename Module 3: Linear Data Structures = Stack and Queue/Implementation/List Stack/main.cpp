#include <iostream>

class Node {
public:
    int data;
    Node* next;
};

class Stack {
    Node* getNewNode(int);
public: 
    Node* top;
    Stack() {
        top = NULL;
    }
    void push(int);
    void pop();
    int peek();
    void display();
};

Node* Stack::getNewNode(int data) {
    Node* newNode = new Node;
    if(newNode == NULL) {
        std::cout << "\nERROR: Not enough memory to allocate for node\n";
        return NULL;
    }
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}

void Stack::push(int data) {
    Node* newNode = getNewNode(data);
    newNode->next = top;
    top = newNode;
    std::cout << "\nPushed value: " << data << "\n";
}

void Stack::pop() {
    if(top == NULL) {
        std::cout << "\nNothing to pop\n";
        return;
    }
    Node* delNode = top;
    top = top->next;
    std::cout << "\nPopped value: " << delNode->data << "\n";
    delete delNode;
}

int Stack::peek() {
    if(top == NULL) {
        std::cout << "\nStack is empty\n";
        return -1;
    }
    std::cout << "\nPeeked: " << top->data << "\n";
    return top->data;
}

void Stack::display() {
    if(top == NULL) {
        std::cout << "\nNothing to display\n";
        return;
    }
    Node* trav = top;
    std::cout << "\n";
    while(trav != NULL) {
        std::cout << trav->data << " ";
        trav = trav->next;
    }
    std::cout << "\n";
}

int main() {
    Stack stk;
    stk.push(30);
    stk.push(20);
    stk.push(50);
    stk.push(70);
    stk.display();
    stk.pop();
    stk.peek();
}