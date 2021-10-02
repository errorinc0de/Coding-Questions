class Solution(object):
    # ---------------------

    def find_l(self, nums):
        '''
        find the left most point which from then on, the sequence decreases
        '''

        i = len(nums) - 2

        while (i > 0):
            if (nums[i] < nums[i + 1]):
                return i + 1

            i = i - 1

        if (nums[0] < nums[1]):
            return 1
        else:
            return 0

    # ---------------------

    def reverse_list(self, p, nums):
        '''
        p is the starting point, reverse to the end
        '''

        for i in range(p, p + (len(nums) - p) / 2):
            temp = nums[i]
            nums[i] = nums[p + len(nums) - i -1]
            nums[p + len(nums) - i - 1] = temp

    # ---------------------

    def find_1st_greater(self, value, p, nums):
        '''
        returns pointer to the first number in nums (from the right)
        which is greater than value
        '''

        i = len(nums) - 1
        while (i >= p):
            if (nums[i] > value):
                return i

            i = i - 1

        return p

    # ---------------------

    def nextPermutation(self, nums):
        """
        :type nums: List[int]
        :rtype: None Do not return anything, modify nums in-place instead.
        """

        # ---------------------

        if (len(nums) <= 1):
            return None

        l = self.find_l(nums)
        if (l == 0):
            # special case: rearrange it as the lowest possible order (ie, sorted in ascending order)
            self.reverse_list(0, nums)
            return None

        fg = self.find_1st_greater(nums[l - 1], l, nums)

        temp = nums[l - 1]
        nums[l - 1] = nums[fg]
        nums[fg] = temp

        self.reverse_list(l, nums)

        # ---------------------
