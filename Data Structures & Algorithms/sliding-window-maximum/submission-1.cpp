class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        deque<int> q;
        vector<int> a;
        int l = 0, r = 0, n = nums.size();
        while (r < n)
        {
            while(!q.empty() && nums[q.back()] < nums[r])
                q.pop_back();
            q.push_back(r);
            if (r >= k - 1)
            {
                a.push_back(nums[q.front()]);
                l++;
            }
            if (l > q.front())
                q.pop_front();
            r++;
        }
        return a;
    }
};
