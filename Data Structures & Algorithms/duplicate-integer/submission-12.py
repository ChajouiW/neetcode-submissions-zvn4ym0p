class Solution:
    def hasDuplicate(self, nums: List[int]) -> bool:
        H = dict()
        for x in nums :
            if x not in H :
                H[x] = 1
            else :
                H[x] += 1
        for x in nums :
            if H[x] > 1 :
                return True
        return False

         