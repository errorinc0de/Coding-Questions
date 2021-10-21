**Link to problem:** https://www.codechef.com/COOK130C/problems/BALLOON/

**Description:**

Chef is participating in an ICPC regional contest, in which there is a total of `N` problems (numbered `1` through `N`) with varying difficulties. For each valid `i`, the `i-th` easiest problem is problem A<sub>i</sub>

After a team solves a problem, a balloon with a colour representing that problem is tied next to their desk. Chef is fond of colours in VIBGYOR, which are representative of the problems with numbers `1` through `7`. The remaining problems have their own representative colours too.

Find the minimum number of problems which Chef's team needs to solve in order to get all the balloons for problems `1` through `7` (and possibly some other balloons too) tied next to their desk, if you know that Chef's team knows the difficulties of all problems and solves the problems in increasing order of difficulty.

**Input:**

- The first line of the input contains a single integer `T` denoting the number of test cases. The description of `T` test cases follows.
- The first line of each test case contains a single integer `N`.
- The second line contains `N` space-separated integers A<sub>1</sub>, A<sub>2</sub>, ..., A<sub>N<sub>

**Output:**

For each test case, print a single line containing one integer ― the minimum number of problems Chef's team needs to solve.

**Constraints:**
 
> - 1 ≤ T ≤ 10,500
> - 7 ≤ N ≤ 15
> - 1 ≤ A<sub>i</sub> ≤ N for each valid i
> - A<sub>1</sub>, A<sub>2</sub>, …, A<sub>N</sub> are pairwise distinct
 
 
 **Example Input:**
 
> 3
  
> 7
  
> 1 2 3 4 5 7 6
  
> 8
  
> 8 7 6 5 4 3 2 1
  
> 9
  
> 7 4 3 5 6 1 8 2 9
 
 **Example Output:**
 
> 7
  
> 8
  
> 8
 
 **Explanation:**
 
 **Example case 1:** Since there are a total of `7` problems, Chef's team will have to solve all of them.

 **Example case 2:** Problems `1` through `7` appear among the first `8` problems.
  
  **Example case 3:** Problems `1` through `7` again appear among the first `8` problems.
