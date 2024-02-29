# Introduction

- No predefined order, therefore making traversing more complex
- Two main types of NLDSA: Trees and Graphs

Tree: Root node with child and leaf nodes

Graph: Combination of vertices and edges, nwhere vertices are nodes and edges are links

# Tree Core Concepts Part 1

### Non-Linear Data Structure

- Elements are not sequential
- An element can be connected to more than two elements
- Data elements cannot be traversed or accessed in a single run
- A linkage may be single or bi-directional

## Tree

A hierarchical data structure defined as a collection of nodes

Each node stores a value and a list of references to its child nodes

A tree is a finite nonempty set of elements

Represents the parent-child relationship

Acyclic directed graph

### Terminology

```Root```: Topmost node in a tree. It has no parent

```Edge```: Connection between nodes

```Parent node```: The immediate predecessor of a node

```Child node```: The immediate successor of a node

```Path```: Sequence of consecutive edges from a source node to the destination node

```Sibling```: A node that shares the same parent with another node

```External/Leaf/Terminal node```: A node without children

```Internal/Non-leaf node```: A node with at least one child

```Subtree```: consists of a node and its descendants

```Degree of node```: Number of children a node has

```Degree of tree```: Highest degree of a node among all the nodes in the tree

```Depth of node```: Length of the path from the root to that node.  The root node has 0 depth

```Height of node```: Longest path(number of edges) from that node to the leaf node

### Application

- Store large volumes of data

- Used in compilers for expression and symbol trees

- Used to implement DBMS

- Used to implement the OS file systems

- Organizational charts


## Binary Tree

A data structure in which each node has a maximum of two children(left and right child)

Used for searching, arithmetic expressions, and decision prosseses.

### Variations

- A complete binary tree has every level completely filled except possibly the last, and all nodes are to the far left as much as possible.

- A full binary tree has every node other than the leaves have two children

The maximum number of nodes on depth i of a binary tree is 2^i, i>=0

The maximum number of nodes in a binary tree of height k is 2^(k+1)-1, k>=0

- A Binary Search Tree(BST) is a collection of nodes arranged in a way where they maintain BST properties

Every node in the left subtree has a value less than the value of its parent node

Every node in the right subtree has a value greater than or equal to the value of its parent node

# Tree Core Concepts Part 2

## Recursion

- A process by which a function, an algorithm, calls itself directly or indirectly with smaller input values

### Pros

- Solves some difficult problems easily and provides more readability

### Cons

- Need a lot of memory
- Can be tougher to debug

### Base case

Infinite recursion calls cause stack overflow, so we need a base case to test against to stop the recursion

### Key components

- Decomposition

Solving the problem using the smaller version of the same problem

- Composition

Solving the problem by combining the answers of smaller problems

- Base/Stopping case

Smallest possible problem that can be solved without further decomposing

### Example

Factorial of N (N!)

```
N! = (N-1)! * N [for N > 1]
```

- N is the composition
- (N-1)! is the decomposition
- 1! is the base case

## Iteration vs Recursion

### Iterative algorithm

- A process of executing statements repeatedly, as long as the specified condition is true.
- Involves four clear cut steps: Initialization, Condition, Execution, Update
- Any recursive problem can be solved iteratively
- More efficient in terms of memory utilization and execution speed

### Recursive algorithm

- A technique of defining a function that calls itself
- An exclusive if statement is required for specifying the stopping condition
- Not all problems have a recursive solution
- Generally, the worst option in case of a simple program or problems not recursive in nature

# Tree Core Concepts Part 3

## Binary Search Tree (BST)

- A node should be greater than the value stored in its left-child node
- A node should be less than or equal to the value stored in its right-child node

### Operations

- Insert
- Search
- Delete
- Traversal (pre/in/post order)

# Graph Core Concepts Part 1

A graph is a mathematical structure used for representing, finding, analyzing, and optimizing connections between elements (nodes)

## Applications

Gps systems use graphs to find the shortest path from one destination to another

Social networks use graphs to represent connections between users

E-commerce websites use graphs to reccommend items to the shopper

In the WWW web pages are considered vertices and the links between pages is considered the edges

## Variations

### Directed (Digraph)

Each node has a direction associated with it

Traversal can only be done in one direction

### Undirected

Nodes no direction associated with it

Traversal can happen in either direction

### Weighted

Edges have a wieght or value

Typically shows the cost of traversing

Value an represent quantities such as cost, distance, and time

### Unweighted

Edges have no weight

Just shows the connections

### Cyclic

Has cycles or closed regions

This is where a node will be the start and end point of a graph

### Acyclic

Has no cycles

No node can be the start and end point

An Acyclic Directed Graph is a Tree

## Terminology

```Vertex```: Every individual data element is called a vertex or a node

```Edge(Arc)```: A connecting link between two nodes or vertices

```Undirected Edge```: It is a bidirectional edge

```Directed Edge```: It is a unidirectional edge

```Weighted Edge```: An edge with value (cost) on it

```Degree```: The total number of edges connected to a vertex in a graph

```Indegree```: The total number of incoming edges connected to a vertex

```Outdegree```: The total number of outgoing edges connected to a vertex

# Graph Core Concepts Part 2

## Representations

### Adjacency Matrix

2D array of size VxV where a V is the number of vertices in a graph

Adjacency matrix for an undirected graph is always symmetric

Also used to represent weighted graphs

if graph[i][j] = w, then there is an edge from vertex i to vertex j with weight w

#### Advantages

Easy to implement and follow

Checking for an edge is efficient and can be done in O(1);

#### Disadvantages

Takes up a ton of memory for large graphs

### Adjacency list

An array of linked lists is used to represent this graph

The size of the array is equal to the number of vertices

An entry in array[i] represents the linked list of vertices adjacent to the ith vertex

The weights of the edges can be stored in the nodes of the linked lists

#### Advantages

Stores graph in more compact form

Easy to add a vertex

#### Disadvanatages

Checking for an edge is not efficient and can be done in O(V);



