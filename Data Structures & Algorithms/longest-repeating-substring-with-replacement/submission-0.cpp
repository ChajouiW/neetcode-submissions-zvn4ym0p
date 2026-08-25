class Solution {
public:
    int characterReplacement(string s, int k) {
        int ans = 0;
        for (int i = 0;s[i]; i++)
        {
            if (i && s[i] == s[i - 1])
            {
                i++;
                continue;
            }
            int dif = 0, c =1;
            for (int j = i + 1; s[j] && dif < k; j++)
            {
                if (s[j] != s[i])
                    dif++;
                c++;
                ans = max(ans, c + 1);
            }
        }
        return ans;
    }
};
