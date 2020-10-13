// https://leetcode.com/problems/find-lucky-integer-in-an-array/
// Easy

// Given an array of integers arr, a lucky integer is an integer which has a frequency in the array equal to its value.
// Return a lucky integer in the array. If there are multiple lucky integers return the largest of them. If there is no lucky integer return -1.

/**
 * @param {number[]} arr
 * @return {number}
 */

var findLucky = function(arr) {
    let hash = {}
    arr.forEach(num => {
        hash[num]? hash[num]++ : hash[num] = 1
    })
    let temp = -1
    for(let i = 0; i < arr.length; i++){
        if(hash[arr[i]] === arr[i]){
            if(arr[i] > temp){
                temp = arr[i]
            }
        }
    }
    return temp
};

// Runtime: 76 ms, faster than 91.78% of JavaScript online submissions for Find Lucky Integer in an Array.
// Memory Usage: 39.3 MB, less than 32.05% of JavaScript online submissions for Find Lucky Integer in an Array.