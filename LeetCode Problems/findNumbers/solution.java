class Solution {
    public int findNumbers(int[] nums) {
        int evens = 0, count = 0, number = 0, odds = 0;
                        for (int i =0; i < nums.length; i++) {
                            number = nums[i];
                            if (number < 100000) {
	    if (number < 100) {
	        if (number < 10) {
	            odds++;
	        } else {
	            evens++;
	        }
	    } else {
	        if (number < 1000) {
	            odds++;
	        } else {
	            if (number < 10000) {
	                evens++;
	            } else {
	                odds++;
	            }
	        }
	    }
	} else {
	    if (number < 10000000) {
	        if (number < 1000000) {
	            evens++;
	        } else {
	            odds++;
	        }
	    } else {
	        if (number < 100000000) {
	            evens++;
	        } else {
	            if (number < 1000000000) {
	                odds++;
	            } else {
	                evens++;
	            }
	        }
	    }
	}
                }
        return evens;
    }
}
