**Link to problem:**https://www.hackerrank.com/challenges/students-marks-sum/copy-from/168478384

**Description:**

WYou are given an array of integers,marks, denoting the marks scored by students in a class.

The alternating elements marks0,marks2,marks4  and so on denote the marks of boys.
Similarly marks1,marks3 ,marks5 ,  and so on denote the marks of girls.
The array name, marks , works as a pointer which stores the base address of that array. In other words,  contains the address where marks0 is stored in the memory.

For example, marks =[3,2,5] let marks and  stores 0x7fff9575c05f. Then, 0x7fff9575c05f is the memory address of .

Complete the function, marks_summation(int* marks, char gender, int number_of_students) which returns the total sum of:

marks of boys if gender = b
marks of girls if gender = g
The locked code stub reads the elements of marks along with gender. Then, it calls the function marks_summation(marks, gender, number_of_students) to get the sum of alternate elements as explained above and then prints the sum.

**Input:**

- The first line contains number_of_students, denoting the number of students in the class, hence the number of elements in marks.
- Each of the number_of_students subsequent lines contains marksi.
- The next line contains gender.

**Output:**

For each testcase, output one line with one integer: the height of the tallest mountain for that test case.

**Constraints:**
 
 > - 1 ≤ number_of_students ≤ 10 <sup> 3</sup>
 
 > - 1 ≤ marksi ≤ 10 <sup>3</sup> 
 
 > - gender = g or b
 
 **Example Input:**
 
 > 3
 
 > 3
 
 > 2
 
 > 5
 
 > b
 **Example Output:**
 
 > 8
