class Solution {
public:
    bool isHappy(int n) {
        unordered_map<int, int> m;

        while (n != 1)
        {
            int nn = 0;
            while (n)
            {
                nn += pow(n % 10, 2);
                n /= 10;
            }
            n = nn;
            if (m.count(n) > 0)
                return false;
            m.insert({n, 1});
        }
        return true;
    }
};
