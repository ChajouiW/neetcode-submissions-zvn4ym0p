class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        deque<int> q;
        vector<int> a;
        int l = 0, r = 0, n = nums.size();
        while (r < n)
        {
            while(!q.empty() && q.back() < nums[r])
            {
                cout << q.back() << ' ' << nums[r] << endl;
                q.pop_back();
            }
            q.push_back(nums[r]);
            if (r >= k - 1)
                a.push_back(q.front());
            if (l > k)
            {
                q.pop_front();
                l++;
            }
            r++;
        }
        return a;
    }
};
