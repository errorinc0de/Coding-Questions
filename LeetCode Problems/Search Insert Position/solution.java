class Solution {
    public int searchInsert(int[] nums, int target) {
        int start = 0;
        int stop = nums.length-1;
        while(stop >= start){
            int mid = (start+stop)/2;
            if(nums[mid] > target){
                stop = mid-1;
            }else if(nums[mid] < target){
                start = mid+1;
            }else{
                return mid;
            }
        }
        return start;
    }
}