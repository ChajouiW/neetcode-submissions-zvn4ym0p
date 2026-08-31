class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int r, l = 1;
        r = *max_element(piles.begin(), piles.end());
        int ans = r;
        while (l <= r)
        {
            int k = (l + r) / 2;
            long long time = 0;
            for (int v: piles)
                time += ceil((double)v / k);
            if (time <= h)
            {
                ans = k;
                r = k - 1;
            }
            else
                l = k + 1;
        }
        return ans;
    }
};
