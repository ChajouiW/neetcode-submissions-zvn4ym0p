class Solution {
public:
    double myPow(double x, int n) {
        if (!n)
            return 1;
        if (!x)
            return 0;
        
        double ans = 1;
        for (int i = 0; i < abs(n); i++)
            ans *= x;
        if (n > 0)
            return ans;
        return (1 / ans);
    }
};
