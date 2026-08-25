class Solution {
public:
    int characterReplacement(string s, int k) {
        int ans = 0;
        for (int i = 0;i < s.size(); i++)
        {
            if (i && s[i] == s[i - 1])
            {
                i++;
                continue;
            }
            int dif = 0, c =1;
            for (int j = i + 1; s[j] && dif <= k; j++)
            {
                if (s[j] != s[i])
                    dif++;
                else
                    c++;
            }
            ans = max(ans, min(dif, k) + c);
        }
        return ans;
    }
};
