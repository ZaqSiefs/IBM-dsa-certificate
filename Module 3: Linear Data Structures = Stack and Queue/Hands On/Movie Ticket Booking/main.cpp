//DO NOT CHANGE THE GIVEN CODE TEMPLATE. WRITE YOUR CODE IN THE PROVIDED PLACES ALONE.

#include <iostream>
using namespace std;

class Queue {
    public:
        int front, rear;
        int personQueue[5];
        Queue() {
            front=rear=-1; 
        }
        void enQueue(int codeNumber);
        void deQueue();
        void display();
};

void Queue::enQueue(int codeNumber)  {      
    //Write your code here
    if(rear >= 4) {
        std::cout << "Currently, the queue is full\n";
        return;
    }
    if(front == -1 && rear == -1) {
        front = rear = 0;
    } else {
        rear++;
    }
    personQueue[rear] = codeNumber;
 }

void Queue:: deQueue() {
    //Write your code here
    if(front < 0) {
        std::cout << "The queue is empty\n";
        return;
    }
    std::cout << "The person removed from the Queue: " << personQueue[front] << "\n";
    if(front == rear) {
        front = rear = -1;
        return;
    }
    front++;
}

void Queue::display(){
    //Write your code here
    if(front < 0) {
        std::cout << "The queue is empty\n";
        return;
    }
    std::cout << "The persons in the queue: ";
    for(int i = front; i <= rear; i++) 
        std::cout << personQueue[i] << " ";
    
    std::cout << "\n";
}
    

int main() {
    Queue q;
    int codeNumber;
    int choice;
    do{
        cout<<"\n1.Add a person to the Queue";
        cout<<"\n2.Remove a person from the Queue";
        cout<<"\n3.Display all the code numbers";
        cout<<"\n4.Exit";
        cout<<"\nEnter your choice:";
        cin>>choice;
        switch(choice) {
            case 1:
                cout<<"\nEnter the code no. of the person:\n";
                cin>>codeNumber;
                q.enQueue(codeNumber);
                break;
            
            case 2:
                q.deQueue();
                break;
           
            case 3:
                q.display();
                break;
            
            case 4:
                return 0;
                
            default:
                cout<<"Invalid option\n";
        }
        
    }while(true);
    
    return 0;
}
           
   