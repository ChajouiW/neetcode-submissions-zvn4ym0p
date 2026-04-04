class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int mi = 101,ma = 0, ans = 0;
        for (int n : prices)
        {
            if (mi > n)
            {
                mi = n;
                ma = 0;
            }
            if (ma < n)
                ma = n;
            ans = max(ans, ma - mi);
        }
        return ans;
    }
};
