class Solution {
public:
    int jump(vector<int>& nums) {
        int far = 0, n = nums.size();
        int end = 0, ans = 0;
        for (int i = 0; i < n - 1; i++)
        {
            far = max(far, nums[i] + i);
            if (i == end)
            {
                end = far;
                ans++;
                if (end >= n - 1)
                    break;
            }
        }
        return ans;
    }
};
