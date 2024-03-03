# Introduction

To implement any application or to implement any particular automated scenario, you need to have a very defined algorithmic angle towards it.

Algorithmic design strategy is very important to reach a solution at a much faster or easier pace.

Various algorithmic design strategies include Divide and Conquer, Greedy, Iterative, etc.

Most algorithms revolve around sorting and searching practices.

Common searching algorithms include Linear and Binary

Common sorting algorithms include Bubble, Quick, Heap, Merge, etc.

# Core Concepts

An algorithm design strategy is an approach or a series of approaches to solving a computational problem

The study of algorithms consist of two parts: analysis and design

Common design stragegies: Iterative, recursive, divide and conquer, greedy, and dynamic programming

## Divide and conquer

The entire problem is first divided into smaller sub parts, and the solution for each sub part is obtained

Next, the solution is combined to achieve the final solution for the entire problem

Steps:

1. Partition the data into different groups
2. Keep dividing until the problems are small enough to solve
3. Find the individual solutions
4. Combine the solutions

This process is used for sorting algorithms

## Greedy

Always takes the best immediate or local solution when finding an answer

Makes the locally optimal choice at each stage with the hope of finding a global optimum

Chooses the next best step without thinking about the future impact

Decides ones and for all

Often, a greedy strategy does not produce an optimal solution, but it yields a local optimal solution that approximate a globally optimal solution at a reasonable time

Divides the problem into multiple steps, and for each step takes the best choice at the current moment

## Dynamic Programming

Solves optimization problems like a greedy algorithm

Solves a given complex problem by breaking it into similar sub problems

Stores the results of sub problems to avoid computing the same results again

Before solving the in-hand sub-problem, it will try to examine the results of the previously solved sub-problems

The solutions of sub-problems are combined in order to achieve the best solution

Posesses two important elements: Overlapping sub problem and Optimal sub structure

### Overlapping sub problem

The solutions that are computed for sub problems are stored in a table so there is no need to compute these solutions again

```Memozation```: The storing of solutions that are computed for sub problems

Dynamic programming is not useful when there are no common sub problems because ther is no point in storing the solutions if they are not needed again

### Optimal sub structure

Indicates that the optimal solution can be obtained from the optimal solutions of its sub problems

Can be applied to any problem that required the recalculation of certain values to reach the final solution

Comparatively slow, but can solve many problems that Greedy algorithms cannot

# Searching & Sorting

## Searching

Retrieves information stored in a data structure

Appropriate algorithm depends on data structure being searched

Classified based on the mechanism of searching

Every search operation involves either a linear search or a binary search

### Linear

Searches for data by comparing each item in a list, one after the other.

### Binary

Efficieny algorithm for finding an item in a sorted list

Works on the principle of Divide and Conquer

## Sorting

Sorting makes searching and retrieval of data faster.

There are different types of sorting algorithms: Bubble, Selection, Insertion, Quick, Merge

### Bubble Sort

Iterates through a list to be sorted.

In each iteration it compares each pair of adjacent items and swaps them if theyre in the wrong order.

### Selection Sort

Selects the smallest element from an unsorted list in each iteration and places that element at the beginning of the unsorted list for sorting in ascending order

Divides array into 2 parts: sorted and unsorted parts

### Insertion Sort

Shifts elements one by one.

Efficient for small sets, not large ones.

### Quick Sort

Can sort any list relatively quickly

Widely used sorting algorithm

Based on divide and conquer

Better used with large arrays

Divides list into 3 main parts: Pivot element, Lesser than pivot, Greater than pivot

### Merge Sort

Works based off of divide and conquer

1. Divide array into 2 halves until one piece is left
2. Sort each half
3. Merge sorted halves into one sorted array

