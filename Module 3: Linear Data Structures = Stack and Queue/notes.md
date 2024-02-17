# Introduction

## Stack

LIFO (Last In First Out)

## Queue

FIFO (First In First Out)

# Stack Core Concepts Part 1

## Stack

- A pile of objects/items organized in a sequential manner.
- A linear data structure.
- Allows access only to the last element inserted.
- Works based on the principle of Last-In-First-Out (LIFO).

### Functions

- Push
    - Insert an element into the stack
- Pop
    - Remove an element from the stack
- Peek
    - Get topmost element of the stack

### Implementations

#### Array

- Size of stack is fixed
- Push the item if there is space in the stack
- Needs a variable called 'top' to keep track of the top element
- -1 in the 'top' variable represents an empty stack

### Errors

- Stack Underflow
    - When we try to pop an item when nothing is there to remove
- Stack Overflow
    - When we try to push an item when the stack is full

# Stack Core Concepts Part 2

## Linked List

- Each node must contain at least 2 attributes: Data to be stored, and a reference to the next node.
- Memory is allocated at the time of push operation and it will be release at the time of pop operation.
- Stack elements can only be inserted/deleted from the top of the stack

# Queue Core Concepts

## Queue

- A linear data structure with restrictions
- Insertion happens at one end called ```Rear``` or ```Tail``` or ```Back```
- Deletion happens at one end called ```front``` or ```head```
- Works based on First-In-First-Out (FIFO) priciple

### Applications

- CPU and disk scheduing
- Handling of interruptions on real-time systems
- Phone systems in call centers use queues to direct the calls in proper order
- Shared resource usage (printer, memory access)

### Operations

- Enqueue
    - Adding an element into the queue at the rear/back end
- Dequeue
    - Removing an element from the front of a queue

### Errors

- Overflow
    - Inserting elements beyond the capacity of the queue
- Underflow
    - Deleting an element from an empty queue

# Queue Core Concepts Part 2

## Circular Queue

- CPU sceduling
- Memory Management
- Traffic Management

## Priority Queue

- A priority will be assigned to each element in the queue
- Elements are inserted at the rear of the queue, whereas elements are deleted based on the priority of the element
- Used for Load balancing, Interruption handling in OS, and Sorting heap

## Double Ended Queue

- Insertion and deletion of an element can take pace at both ends
- Known as a Deque
- - Input restricted Deque has insertion blocked at a single end, and allows deletion at both ends
- - Output restricted Deque has deletion blocked at a single end, and allows insertion at both ends
