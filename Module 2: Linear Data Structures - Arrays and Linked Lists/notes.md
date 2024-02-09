# Introduction

## Linear Data Structures

An organized collection of entities, items, or values.

### C++ Types

#### Static

- Arrays

#### Dynamic

- Linked lists
- Stacks
- Queues

### Arrays

Data structure implementation which helps to store homogeneous data elements in contiguous memory locations

Accessibility is faster because the memory addresses are consecutive

Can have one dimensional implementation or multidimentional implementation.

Arrays cannot grow and shrink because they are static... for this you need dynamic arrays - or other dynamic structures

### Linked List

Insert elements in any place within the chain

Grow the linked list as data comes in and will shrink itself as data is deleted.

A series of nodes, with 2 parts to the node:

1. The data
2. The link to the next node

There can be a 3rd node if it is a doubly linked list

3. The link to the previous node

# Arrays & Linked Lists Core Concepts Part 1

## Linear List

- A collection of sequentially connected items

eg. To-do list, item list

In CS - A list is an ordered collection of values, itmes, entries, elements, etc.

This can be implemented in our programs using either an array or a linked list.

## Array

- Homogeneous data in contiguous memory locations.
- Multiple values can ve stored at a single variable using arrays.
- It is like a box with equally spaced slots into which data can be stored.
- Fixed size
- If you know the number of items you will have beforehand, you can use an array DS.
- Can be classified as single dimensional array or multi-dimensional array.

### One Dimensional Array

- A linear list of values.
- Can access an array element using the name along with its index.

### Multi-Dimensional Array

- Can span across more than one dimension.
- More than one index variable for every point of storage
- 2D array is called a matrix


### Pros
- Efficient
- Fast to traverse

### Cons
- Need to know size beforehand
- Insertion and deletion are difficult

### Applications

- Ticket booking system
- Game leaderboards
- 2D matrix for image processing and Speech processing

## Linked List

- Collection of elements called nodes arranged in a linear sequence.
- Allocates space for each element separately.
- Gets overall structure by using pointers and references to connect nodes
- Each node may contain one or more data elements and a reference to the next node
- Dynamic data structure
- Head/front that points to the first node. This is the entry point.

### Pros

- Grows and Shrinks at runtime;
- No restrictions when implementing operations such as insertion, deletion, and traversing/accessing
- Operations may be done at any part of the list
- No memory wastage

### Cons
- Each element needs to store a pointer to the next node, requiring more memory
- More difficult to traverse


# Arrays & Linked Lists Core Concepts Part 2

## Linked List

### Operations

We can insert, and delete items from the start, end, or selected position in the list.

Modification happens by traversing the list to find the node that must be change, and then altering the data.

### Steps for insertion

1. Allocate memory and store the data
2. Find the location to insert the new node
3. Point the new node to its successor
4. Point the new node's predecessor to the new node

# Arrays & Linked Lists Core Concepts Part 3

There are multiple variations of linked lists:

- Singly Linked Lists
- Doubly Linked Lists
- Circularly Linked Lists

## Singly Linked List

A collection of nodes with a head and a tail, only pointing sequentially from head to tail.

There can be any amount of data, but only one memory address pointing to the next node.

Can only be traversed in one direction.

## Doubly Linked List

Same as Singly Linked Lists, except there is an additional variable in each node to store the memory address of the previous node.

head->prev will always = NULL and tail->next will always = NULL.

More efficient Insert, Delete, and Search operations.

Requires more space, and modification sequences increase.

## Circular List

Last->next = Head

Head->prev = Last (only for Circular Doubly Linked List)

Can be traversed from any node in a list.

Infinite Loops are easy to come by

Reversing is complex

## Applications

When unsure of the number of elements that will need to be stored in a list

Used in browser cache to store BACK-FORWARD visited pages, images, browser history

Undo and Redo function in certain software

When needing to track info in a circular fashion - player turns in muti-player games.

# Summary

- A linear list is an ordered collection of values.  Arrays and linked lists are linear lists.
- An array is a collec tion of homogeneous elements stored contiguously and its size is fixed.
- Insertion and deletion operations are a bit difficult in arrays because of shifting elements.
- A Linked list is a collection of connected elements called nodes, arranged in a linear sequence.
- The size of a Linked List is not fixed. It can grow or shrink dynamically.
- A singly linked list stores data and the address of the next node.
- A Doubly Linked List contains memory area to store the data, the address of the previous node, and the address of the next node.
- A circular list is a list in which the link field ('next') of the last node referes to the first node of the list.