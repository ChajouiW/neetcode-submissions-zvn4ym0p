class Solution {
public:
    bool canJump(vector<int>& nums) {
        int n = nums.size() ;
        int toReach =  n - 1;
        for (int i = n - 1; i >= 0; i--)
        {
            if (nums[i] >= toReach - i)
                toReach = i;
        }
        return toReach == 0;
    }
};

