#include <iostream>

#define MAX 10

class Stack {
    int top;
public:
    int arr[MAX];
    Stack() {
        top = -1;
    }
    void push(int);
    void pop();
    int peek();
};

void Stack::push(int item) {
    if(top >= (MAX-1)) {
        std::cout << "\nStack Overflow\n";
        return;
    }
    arr[++top] = item;
    std::cout << "\nElement added: " << item << "\n";
}

void Stack::pop() {
    if(top < 0) {
        std::cout << "\nStack Underflow\n";
        return;
    }
    std::cout << "\nElement Deleted: " << arr[top] << "\n";
    top--;
}

int Stack::peek() {
    if(top < 0) {
        std::cout << "\nStack Underflow\n";
        return -1;
    }
    std::cout << "\nElement Peeked: " << arr[top] << "\n";
    return arr[top];
}

int main() {
    Stack st;
    st.push(8);
    st.push(4);
    st.push(5);
    st.push(9);
    st.peek();
    st.pop();
    st.peek();
    st.pop();
    st.peek();
    st.pop();
    st.peek();
}