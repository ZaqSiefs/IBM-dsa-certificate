# Introduction

There are usually many solutions to a problem, but it is best to use the best solution.

This means to pick the right algorithm and data structure for the problem at hand.

Algorighms are measured in terms of efficiency by calculating the time complexity and space complexity

## Time Complexity

Can be measured in 3 ways:

- Best case
    - Least amount of time to complete an algorithm
- Average case
    - Average amount of time to complete an algorithm
- Worst case
    - Maximum amount of time to complete an algorithm

## Space Complexity

Largely dependant on the kind of data and data structure implementations we use.

Every variable or identifier has a memory footprint and we need to minimize space used.

Can be measured in 3 ways:

- Best case
    - Least amount of space used to complete an algorithm
- Average case
    - Average amount of space used to complete an algorithm
- Worst case
    - Maximum amount of space to used complete an algorithm

# Core Concepts Part

## Analyzing Efficiency

Based on 3 things:

- Quality and Accuracy
- Time Complexity
- Space Complexity

### Time complexity

The total time required by the algorithm to complete its execution with provided resources.

The actual time is dependant on many factors, like language, OS, hardware, processor, etc.

Generally, the time complexity is measured in terms of the number of operations rather than computing time.

The time for most algorithms depends on the amount of data or the size of the problem.

The time needed is proportional to the amount of data.

The BEST algorithm should have the least time complexity.

#### Asymptoptic Analysis

The process of calculating the running time of any operation and mathematical units of computation

In this analysis, in terms of input size, we evaluate the performance of an algoritm.

The aim of this analysis is to determine the best case, worst case, and average case time required to execute a given task.

When talking about the efficiency of an algorithm, we concentrate on finding only the worst case running time.

For some algorithms, all cases are asymptotically the same - meaning best, worst, and average case are identical.

Big-O notation is an asymptotic notation used to represent time complexity.

Big-O is the most common metric for calculating time complexity.

### Space Complexity

The total space or memory taken by the algorithm to perform its operation.

With respect to the input size, it includes both auxilarry space aand input space.

The best algorithm should havve the least space complexity.

The less space used, the faster it executes.

## Big-O Notations (from fast to slow)

### O(1)

An algorithm executes on a constant time period

E.g.: Checking whether a given number is Odd or Even

E.g.: Sequence of statements

GOOD ZONE

### O(log n)

An algorithm that executes in a logarithmic time period

E.g.: Binary search of an element on a sorted array

GOOD ZONE

### O(n)

An algorithm that executes in a linear time period

E.g.: Finding the max element in an unsorted array

E.g.: Single loop statements

OK ZONE

### O(n log n)

An algorithm that executes in linearithmic running-time

E.g.: Sorting elements in an array with merge sort

BAD ZONE

### O(n^2)

An algorithm that executes in a quadratic time period

E.g.: Sorting array with bubble sort

E.g.: Nested loop where each loops N times

BAD ZONE


### O(2^n)

An algorithm that executes in an exponential time period

E.g.: Finding all subsets of an array

BAD ZONE

