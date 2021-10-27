**Link to Problem:** https://www.hackerrank.com/challenges/java-2d-array/problem

**Description:**

You are given a 6*6 2D array. An hourglass in an array is a portion shaped like this:

a b c
  d
e f g
For example, if we create an hourglass using the number 1 within an array full of zeros, it may look like this:

1 1 1 0 0 0
0 1 0 0 0 0
1 1 1 0 0 0
0 0 0 0 0 0
0 0 0 0 0 0
0 0 0 0 0 0
Actually, there are many hourglasses in the array above. The three leftmost hourglasses are the following:

1 1 1     1 1 0     1 0 0
  1         0         0
1 1 1     1 1 0     1 0 0
The sum of an hourglass is the sum of all the numbers within it. The sum for the hourglasses above are 7, 4, and 2, respectively.

In this problem you have to print the largest sum among all the hourglasses in the array.

**Task**

Your task is to take two numbers of int data type, two numbers of float data type as input and output their sum:

Declare 4 variables: two of type int and two of type float.
Read 2 lines of input from stdin (according to the sequence given in the 'Input Format' section below) and initialize your 4 variables.
Use the + and - operator to perform the following operations:
- Print the sum and difference of two int variable on a new line.
- Print the sum and difference of two float variable rounded to one decimal place on a new line.

**Input Format**

There will be exactly 6 lines, each containing 6 integers seperated by spaces. Each integer will be between 9 and 9 inclusive.


**Output Format**

Print the answer to this problem on a single line.

**Sample Input**

1 1 1 0 0 0
0 1 0 0 0 0
1 1 1 0 0 0
0 0 2 4 4 0
0 0 0 2 0 0
0 0 1 2 4 0

**Sample Output**

19

**Explanation**

The hourglass which has the largest sum is:

2 4 4
  2
1 2 4