class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums)
    {
        int size = nums.size();
        vector<vector<int>> ans;

        sort(nums.begin(), nums.end());
        for (int i = 0; i < size; i++)
        {
            if (i && nums[i] == nums[i - 1])
                continue;
            int j = size - 1, k = i + 1;
            while(k < j)
            {
                long long sum = (long long)nums[i] + nums[k] + nums[j];
                if (sum < 0)
                    k++;
                else if (sum > 0)
                    j--;
                else
                {
                    ans.push_back({nums[i], nums[k++], nums[j--]});
                    while(k < j && nums[k] == nums[k - 1])
                        k++;
                    while(k < j && nums[j] == nums[j + 1])
                        j--;
                }
            }
        }
        return ans;
    }
};
