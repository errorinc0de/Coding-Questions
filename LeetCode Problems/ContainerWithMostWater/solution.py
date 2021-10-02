class Solution:
    def maxArea(self, height):
        
        l,r,_maxs = 0,len(height) - 1,0
        while l < r:
        	_maxs = max((r - l) * min(height[l],height[r]),_maxs)
        	if height[l] < height[r]:
        		l += 1
        	else:
        		r -= 1
        return _maxs