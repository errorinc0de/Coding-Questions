Write a function that takes in an array of integers and returns a boolean representing whether the array is monotonic.

An array is said to be monotonic if its elements, from left to right, are entirely non-increasing or entirely non-decreasing.

Non-increasing elements aren't necessarily exclusively decreasing; they simply don't increase. Similarly, non-decreasing elements aren't necessarily exclusively increasing; they simply don't decrease.

Note that empty arrays and arrays of one element are monotonic.

**Sample Example:**

```
Input: 

array = [-1, -5, -10, -1100, -1100, -1101, -1102, -9001]

Output:

true
```

Optimal Space and Time Complexity:

```
O(n) time | O(1) space - where n is the length of the array
```