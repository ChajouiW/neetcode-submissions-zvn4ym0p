class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map <int, int> map;
        int size = nums.size();
        for (int i = 0; i < size; i++)
            map[nums[i]] = i;
        for (int i = 0; i < size; i++)
        {
            int j = map[target - nums[i]];
            if (j && j != i)
                return {i, j};
        }
        return {-1, -1};
    }
};
