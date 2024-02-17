#include <iostream>
#include <assert.h>

class Node {
public:
    int data;
    Node* next;
};

class Queue {
    Node *front, *rear;
    Node* getNewNode(int);
public:

    Queue() {
        front = NULL, rear = NULL;
    }

    void enQueue(int);
    void deQueue();
    void display();
};

Node* Queue::getNewNode(int data) {
    Node* newNode = new Node;
    if(newNode == NULL) {
        std::cout << "ERROR: Not enough memory allocated for node\n";
        return NULL;
    }
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}

void Queue::enQueue(int data) {
    Node* newNode = getNewNode(data);
    assert(newNode != NULL);
    if(front == NULL)
        front = newNode, rear = newNode;
    else 
        rear->next = newNode, rear = newNode;

    std::cout << "Element inserted: " << data << "\n";
    display();
}   

void Queue::deQueue() {
    if(front == NULL) {
        std::cout << "Queue underflow" << "\n";
        return;
    }
    Node* temp = front;
    if(front == rear) 
        front = NULL, rear = NULL;
    else
        front = front->next;
    std::cout << "Deleted element: " << temp->data << '\n';
    delete temp;
    display();
}

void Queue::display() {
    if(front == NULL) {
        std::cout << "Queue Underflow\n";
        return;
    }
    Node* trav = front;
    std::cout << "~Queue: ";
    while(trav != NULL) {
        std::cout << trav->data << " ";
        trav = trav->next;
    }
    std::cout << "\n\n";
}

int main() {
    Queue q;
    q.enQueue(10);
    q.enQueue(20);
    q.enQueue(30);
    q.enQueue(40);
    q.enQueue(50);
    q.deQueue();
    q.deQueue();
    q.deQueue();
    return 0;
}