#include <iostream>

# define MAX 10

class Queue {
    int front, rear;
    int arr[MAX];
public:

    Queue() {
        front = -1, rear = -1;
    }
    void enQueue(int);
    void deQueue();
};

void Queue::enQueue(int item) {
    if(rear == MAX - 1) {
        std::cout<< "\nQueue Overeflow\n";
        return;
    }
    if(front == -1 && rear == -1)
        front = 0, rear = 0;
    else rear++;
    arr[rear] = item;
    std::cout << "\nItem inserted: " << item << "\n";
}

void Queue::deQueue() {
    if(rear == -1) {
        std::cout << "\nQueue Underflow\n";
        return;
    }
    int item = arr[front];
    if(front == rear) 
        front = -1, rear = -1;
    else front++;
    std::cout << "\nItem deleted: " << item << "\n";
}

int main() {
    Queue q;
    q.enQueue(1);
    q.enQueue(2);
    q.enQueue(3);
    q.deQueue();
    q.deQueue();
    q.deQueue();
    q.deQueue();
    return 0;
}