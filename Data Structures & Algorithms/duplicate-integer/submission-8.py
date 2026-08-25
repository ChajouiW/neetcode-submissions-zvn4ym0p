class Solution:
    def hasDuplicate(self, nums: List[int]) -> bool:
        H = {}
        for x in nums :
            if x not in H.keys() :
                H[x] = 1
            else :
                H[x] += 1
        for x in nums :
            if H[x] > 1 :
                return False
        return True

         