class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map <int, int> map;
        int n = nums.size();
        for (int num : nums)
            map[num]++;
        vector <vector<int>> b(n + 1);
        for (auto [num, fre] : map)
            b[fre].push_back(num);
        vector <int> r;
        for (int i = n; i >= 1 && r.size() < k; i--)
        {
            for (int num : b[i])
            {
                r.push_back(num);
                if (r.size() == k)
                    break;
            }
        }
        return r;
    }
};
