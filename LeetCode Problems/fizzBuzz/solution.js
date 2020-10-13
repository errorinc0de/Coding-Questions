// https://leetcode.com/problems/fizz-buzz/
// Easy

// Write a program that outputs the string representation of numbers from 1 to n.
// But for multiples of three it should output “Fizz” instead of the number and for the multiples of five output “Buzz”. For numbers which are multiples of both three and five output “FizzBuzz”.

/**
 * @param {number} n
 * @return {string[]}
 */
var fizzBuzz = function(n) {
    let answerArray = []
    const dictionary = {3: "Fizz", 5: "Buzz"}
    
    for(let i = 1; i <= n; i++){
        let thisValue = ''
        for (let key in dictionary){
            if (i % key === 0){
                thisValue += dictionary[key]
            }
        }
        if (thisValue === ''){
            thisValue = i.toString()
        }
        answerArray.push(thisValue)
    }
    return answerArray
};

// Runtime: 92 ms, faster than 17.28% of JavaScript online submissions for Fizz Buzz.
// Memory Usage: 42 MB, less than 5.03% of JavaScript online submissions for Fizz Buzz.