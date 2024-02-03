# Introduction

## Prerequisites

- Get good at C++ syntax | This technically means understand a bit about iostream, pointers, and OOP in C++.  

# Hands-On

## Word Game

Here I took a functional approach instead of typing the logic in the main method.

All this function needs to do its job is a pointer to, and length of the string that the user inputs.

First, the function checks if the length of the string is an even number since any odd number string is invalid.

Next, the loop will check each character in the string against each character in the string.  The string is only valid if each character has exactly 2 matches (itself and one other).

I chose to make "is not" the first check because it is more likely.

## Quality Check

Here I input all of the logic within the main method.

First, as the user is inputing the weight of each egg, the code is checking if the weight is faulty, non-ideal, or ideal.  I used 3 variables to store the amount of eggs in each category, incrementing them if proper conditions are met.  The loop will break if there are more than 4 faulty eggs.

Then, The code prints the proper messages with the proper output logic.

## Circle Area

Here I took an OO approach  with the classes Circle and Utility.

The Circle class has a private variable ```radius```, a public constructor that sets the value of ```radius```, and a public member function ```getRadius()``` that returns the value of the objects ```radius```.

The Utility class has a public member function called ```calculateArea(Circle)``` that will calculate the area of a circle when given a Circle object.

Finally, after the user inputs the radius, it is stored in a Circle variable "c" using it's constructor.  The ```calculateArea(Circle)``` function is called from the Utility class, and the c is passed into it.  This value is stored in the variable ```circleArea``` to be output to the console.




