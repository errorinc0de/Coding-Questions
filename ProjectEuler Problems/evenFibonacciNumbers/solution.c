/**
 * @file
 * @brief Finds the sum of all even valued terms in the 
 * Fibonacci sequence whose values do not exceed four million
 */

#include <inttypes.h> // for uint64_t, uint16_t data types
#include <stdio.h> // for printf function

/**
 * @brief Calculates the number at the `term`'th position of the fibonacci sequence
 * @param term the nth position in the fibonacci sequence
 * @returns The number at the `term`'th position of the fibonacci sequence
 */
uint64_t fib(int term) {
    if(term == 0) return 0;  // base case
    if(term == 1) return 1;  // base case

    return fib(term - 1) + fib(term - 2); // according to the formula fib(n) = fib(n-1) + fib(n-2)
}

/**
 * @brief Sums the Even Fibonaccy numbers starting from 1, 2 upto `limit`
 * @param limit the limit at which the fibonacci sequence should end
 * @returns Sum of the Even Fibonacci numbers in the sequence
 */
uint64_t sumOfEvenFibNumsUpto(uint64_t limit) {
    uint64_t fibNum;   // holds the fibonacci number generated
    uint64_t sum = 0;  // holds the sum of the even valued terms
    uint16_t term = 3;           // starting at term 3 (counting from 0) because fib sequence starts at 0, 1, 1, 2
    
    while((fibNum = fib(term)) < limit) { // Executes while the current fibonnaci number at the `term`'th position is less than `limit`
        if(fibNum % 2 == 0) { // Checks if `fibNum` is even
            sum += fibNum;   // Adds the new even fibonacci number to `sum`
        }
        term++;          // Adds `term` by 1
    }

    return sum;
}

/**
 * @brief Main function
 * @returns 0 on exit
 */
int main(void) {
    // Stores the sum of all even valued terms in the Fibonacci sequence whose values do not exceed four million
    uint64_t sum = sumOfEvenFibNumsUpto(4000000);

    // prints the output
    printf("The sum of all even valued terms in the Fibonacci sequence whose values do not exceed four million is %lu", sum);
    
    return 0;
}