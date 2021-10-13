class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        for i in range(len(nums)):
            # difference of current number in list and target
            d = target - nums[i]

            # if the number is in list, it means that we have two numbers,
            # the sum of which is equal to target.
            if d in nums[i+1:]:
                return [i, nums[i+1:].index(a) + i+1]