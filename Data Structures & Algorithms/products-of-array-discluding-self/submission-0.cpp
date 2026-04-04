class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector <int> r;
        int t = 1;
        int zeros = 0;
        for (int i : nums)
            if (i)
                t *= i;
            else
                zeros++;
        for (int i : nums)
            if (i && !zeros)
                r.push_back(t / i);
            else if (!i && zeros == 1)
                r.push_back(t);
            else
                r.push_back(0);
        return r;
    }
};
