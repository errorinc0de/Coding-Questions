class Solution(object):
    def sortedSquares(self, A):
        return sorted(x*x for x in A)