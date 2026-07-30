class Solution {
public:
    int missingNumber(vector<int>& nums) {
        long sum = 0, n = nums.size();
        n = n * (n + 1) / 2;
        for (int i = 0; i < nums.size(); i++)
            sum += nums[i];
        return n - sum;
    }
};
