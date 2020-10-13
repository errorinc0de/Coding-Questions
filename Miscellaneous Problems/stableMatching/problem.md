Given n men and n women, where each person has ranked all members of the opposite sex in order of preference, marry the men and women together such that there are no two people of opposite sex who would both rather have each other than their current partners. When there are no such pairs of people, the set of marriages is deemed stable.

A matching is stable when there does not exist any match (A, B) which both prefer each other to their current partner under the matching.

 

**Example 1:**

```
Input:  1 
        4
        7 5 6 4 
        5 4 6 7 
        4 5 6 7 
        4 5 6 7 
        0 1 2 3 
        0 1 2 3 
        0 1 2 3 
        0 1 2 3 
Output: Woman   Man
         4      2
         5      1
         6      3
         7      0

time complexity: O(n^2)
space complexity: O(n^2)
```

 

**Note:**

1. `1 <= N.length <= 1000`

link: https://www.cs.princeton.edu/~wayne/kleinberg-tardos/pdf/01StableMatching.pdf