var maxSubArray = function(nums) {
    let sum = nums[0]
    let maxSum = nums[0]
    
    for(let i = 1; i < nums.length; i++){
        sum = Math.max(nums[i], nums[i] + sum)
        maxSum = Math.max(maxSum, sum)
    }

    return maxSum
};

// Runtime: 80 ms, faster than 76.21% of JavaScript online submissions for Maximum Subarray.
// Memory Usage: 36.5 MB, less than 99.09% of JavaScript online submissions for Maximum Subarray.