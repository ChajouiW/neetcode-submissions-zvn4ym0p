class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int size = nums.size(), ans = 0;
        unordered_set<int> s(nums.begin(), nums.end());

        for (int i = 0; i < size; i++)
        {
            int curr = nums[i], len = 1;
            if (s.find(curr - 1) != s.end())
                continue;
            while (s.find(++curr) != s.end())
                len++;
            ans = max(len, ans);
        }
        return ans;
    }
};