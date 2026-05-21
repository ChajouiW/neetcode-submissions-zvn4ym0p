class Solution {
public:
    bool isHappy(int n) {
        unordered_set<int> m;

        while (m.find(n) == m.end())
        {
            int nn = 0;
            m.insert(n);
            while (n)
            {
                nn += (n % 10) * (n % 10);
                n /= 10;
            }
            n = nn;
            if (n == 1)
                return true;
        }
        return false;
    }
};
