#include <iostream>

#define MAX 5

class Stack {
    int top;
public:
    int array[MAX];
    Stack() {
        top = -1;
    }
    int getTop();
    void push(int);
    void pop();
    int peek();
    void display();
};

int Stack::getTop() {
    return top;
}

void Stack::push(int bookNo) {
    array[++top] = bookNo;
}

void Stack::pop() {
    if(top < 0) {
        std::cout << "Box is empty\n";
        return;
    }
    std::cout << "The book is deleted from the box: bk10" << array[top] << "\n";
    top--;
}

int Stack::peek() {
    if(top < 0) {
        std::cout << "Box is empty\n";
        return -1;
    }
    return array[top];
}

void Stack::display() {
    if(top < 0) {
        std::cout << "Box is empty\n";
        return;
    }
    std::cout << "The books in this box: ";
    for(int i = top; 0 <= i; i--) {
        std::cout << "bk10" << array[i] << " ";
    }
    std::cout << "\n";
}

int main() {
    Stack s{};
    bool run = true;
    while(run == true) {

        int choice{};
        std::cout << "\n"
                     "1. Insert a book in the box\n"
                     "2. Delete a book from the box\n"
                     "3. Display book box\n"
                     "4. Exit\n"
                     "\n"
                     "Enter your choice: ";
        std::cin >> choice;
        switch(choice) {
            case 1: {
                if((s.getTop()) >= (MAX - 1)) {
                    std::cout << "The box is full\n";
                    break;
                }
                int bookNo{};
                std::cout << "Enter the book No: bk10";
                std::cin >> bookNo;
                s.push(bookNo);
                break;
            }
            case 2: {
                s.pop();
                break;
            }
            case 3: {
                s.display();
                break;
            }
            case 4: {
                run = false;
                break;
            }
            default: {
                std::cout << "Invalid option.\n";
            }
        }
        

    }
    return 0;
}