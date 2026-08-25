class Solution:
    def hasDuplicate(self, nums: List[int]) -> bool:
        H = {}
        for x in nums :
            if x not in H :
                H[x] = 1
            else :
                H[x] += 1
        return sum({k for k in H.keys()}) == len(nums)

         