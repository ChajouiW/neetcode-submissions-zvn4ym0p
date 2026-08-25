class Solution:
    def hasDuplicate(self, nums: List[int]) -> bool:
        H = dict()
        for x in nums :
            if x not in H :
                H[x] = 1
            else :
                H[x] += 1
        print(H)
        return True

         