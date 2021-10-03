**Link->problem:** https://www.hackerrank.com/challenges/ctci-contacts/

Description:

We're going to make our own Contacts application! The application must perform two types of operations:

add name, where  is a string denoting a contact name. This must store  as a new contact in the application.
find partial, where  is a string that denotes a partial name to search the application for. It must count the number of contacts starting with  and print the count on a new line.
Given  sequential add and find operations, perform each operation in order.

Input Format

The first line contains a single integer, , the number of operations to perform.
Each line  of the  subsequent lines contains an operation in one of the two forms defined above.

Constraints

1. 1 <= n <= 10^5

2. 1 <= |name| <= 21

3. 1 <= |patial| <= 21

4. It is guaranteed that  and  contain lowercase English letters only.

5. The input does not have any duplicate  for the  operation.

Output Format

For each find partial operation, print the number of contact names starting with  on a new line.

Sample Input

4
add hack
add hackerrank
find hac
find hak

Sample Output

2
0

Explanation

We perform the following sequence of operations:

Add a contact named hack.
Add a contact named hackerrank.
Find and print the number of contact names beginning with hac. There are currently two contact names in the application and both of them start with hac, so we print  on a new line.
Find and print the number of contact names beginning with hak. There are currently two contact names in the application but neither of them start with hak, so we print  on a new line.
