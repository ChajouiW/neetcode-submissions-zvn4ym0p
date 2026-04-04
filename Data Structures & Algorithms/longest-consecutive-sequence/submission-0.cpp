class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int size = nums.size();
        int ans = 0;
        unordered_set<int> s;
        for (int i = 0; i < size; i++)
            s.insert(nums[i]);
        for (int i = 0; i < size; i++)
        {
            int curr = nums[i], len = 0;
            if (s.find(curr - 1) != s.end())
                continue;
            while (s.find(curr) != s.end())
            {
                curr++;
                len++;
            }
            ans = max(len, ans);
        }
        return ans;
    }
};