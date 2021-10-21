**Link to Problem:** https://www.hackerrank.com/challenges/queens-on-board/problem

**Description:**

You have an N * M chessboard on which some squares are blocked out. In how many ways can you place one or more queens on the board, such that, no two queens attack each other? Two queens attack each other, if one can reach the other by moving horizontally, vertically, or diagonally without passing over any blocked square. At most one queen can be placed on a square. A queen cannot be placed on a blocked square.

**Input Format**

The first line contains the number of test cases T. T test cases follow. Each test case contains integers N and M on the first line. The following N lines contain M characters each, and represent a board. A '#' represents a blocked square and a '.' represents an unblocked square.

**Constraints**

1 <= T <= 100
1 <= N <= 50
1 <= M <= 5

**Output Format**

Output T lines containing the required answer for each test case. As the answers can be really large, output them modulo (10^9)+7.

**Sample Input**

4  
3 3  
...  
...  
...  
3 3  
.#.  
.#.  
...  
2 4  
.#..  
....  
1 1  
#

**Sample Output**

17  
18  
14  
0 