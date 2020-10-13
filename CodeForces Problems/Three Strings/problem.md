**Link to the Problem:** https://codeforces.com/contest/1301/problem/A

**Description:**
You are given three strings a, b and c of the same length n. The strings consist of lowercase English letters only. The i-th letter of a is ai, the i-th letter of b is bi, the i-th letter of c is ci.

For every i (1≤i≤n) you must swap (i.e. exchange) ci with either ai or bi. So in total you'll perform exactly n swap operations, each of them either ci↔ai or ci↔bi (i iterates over all integers between 1 and n, inclusive).

For example, if a is "code", b is "true", and c is "help", you can make c equal to "crue" taking the 1-st and the 4-th letters from a and the others from b. In this way a becomes "hodp" and b becomes "tele".

Is it possible that after these swaps the string a becomes exactly the same as the string b?

**Input**
The input consists of multiple test cases. The first line contains a single integer t (1≤t≤100)  — the number of test cases. The description of the test cases follows.

The first line of each test case contains a string of lowercase English letters a.

The second line of each test case contains a string of lowercase English letters b.

The third line of each test case contains a string of lowercase English letters c.

It is guaranteed that in each test case these three strings are non-empty and have the same length, which is not exceeding 100.

**Output**
Print t lines with answers for all test cases. For each test case:

If it is possible to make string a equal to string b print "YES" (without quotes), otherwise print "NO" (without quotes).

You can print either lowercase or uppercase letters in the answers.

**Sample input**
4
aaa
bbb
ccc
abc
bca
bca
aabb
bbaa
baba
imi
mii
iim

**Sample output**
NO
YES
YES
NO

**Explanation**
In the first test case, it is impossible to do the swaps so that string a becomes exactly the same as string b.

In the second test case, you should swap ci with ai for all possible i. After the swaps a becomes "bca", b becomes "bca" and c becomes "abc". Here the strings a and b are equal.

In the third test case, you should swap c1 with a1, c2 with b2, c3 with b3 and c4 with a4. Then string a becomes "baba", string b becomes "baba" and string c becomes "abab". Here the strings a and b are equal.

In the fourth test case, it is impossible to do the swaps so that string a becomes exactly the same as string b.