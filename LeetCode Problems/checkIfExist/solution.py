class Solution:
    def checkIfExist(self, arr: List[int]) -> bool:
        tmp = set(arr)
        if 0 in tmp and arr.count(0) > 1:
            return True
        for num in arr:
            if num != 0 and 2 * num in tmp:
                return True
        return False