class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map <char,int> m;
        if (!s[0])
            return 0;
        int ans = 1, l = 0;
        for (int i = 0; s[i]; i++)
        {
            if (m[s[i]] >= l)
                l = m[s[i]] + 1;
            m[s[i]] = i;
            ans = max(ans, i - l + 1);
        }
        return ans;
    }
};
