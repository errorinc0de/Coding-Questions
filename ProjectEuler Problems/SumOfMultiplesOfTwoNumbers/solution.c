/**
 * @file
 * @brief Finds the sum of all multiples of 3 or 5 below 1000
 */

#include <stdio.h>  // for IO operations 

/**
 * @brief Calculates the sum of the multiples of `num1` and `num2` below `limit`
 * @param num1 the first number to sum its multiples
 * @param num2 the second number to sum its multiples
 * @param limit the maximum number to consider while getting multiples of `num1` and `num2`
 * @returns sum of the multiples of `num1` and `num2` below `limit`
 */
int sumOfMult(int num1, int num2, int limit) {
    int sum = 0;           // Holds the sum of the multiples of `num1` and `num2` 
    int tempNum1 = num1;   // Holds the progressive multiples of `num1`
    int tempNum2 = num2;   // Holds the progressive multiples of `num2`

    while(tempNum1 < limit || tempNum2 < limit) { // Executes while the current multiple of `num1` or `num2` is less than `limit`
        if(tempNum1 < limit) { // Checks if the current multiple of `num1` is less than `limit`
            sum += tempNum1;   // Adds current multiple of `num1` to `sum`
        }
        if(tempNum2 < limit && tempNum2 % num1 != 0) { // Checks if the current multiple of `num2` is less than `limit` and if `tempNum2` is also divisible by `num1`
            sum += tempNum2;   // Adds current multiple of `num2` to `sum`
        }
        tempNum1 += num1; // Goes to next multiple of `num1`
        tempNum2 += num2; // Goes to next multiple of `num2`
    }
    
    return sum;
}

/**
 * @brief Main function
 * @returns 0 on exit
 */
int main(void) {
    // Stores the sum of all multiples of 3 or 5 below 1000
    int sumOfMultiples = sumOfMult(3, 5, 1000);

    // prints the output
    printf("The sum of all multiples of 3 or 5 below 1000 is %d\n", sumOfMultiples);

    return 0;
}