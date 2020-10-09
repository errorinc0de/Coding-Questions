class Solution:
    def findMaxConsecutiveOnes(self, nums: List[int]) -> int:
        length = 0
        ans = 0
        for n in nums:
            if n == 1:
                length += 1
                ans = max(length, ans)
            else:
                length = 0
        return ans