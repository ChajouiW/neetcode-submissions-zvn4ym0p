class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map <char,int> m;
        int ans = 0, l = 0;
        for (int i = 0; s[i]; i++)
        {
            if (m[s[i]] > l)
                l = m[s[i]];
            m[s[i]] = i + 1;
            ans = max(ans, i - l + 1);
        }
        return ans;
    }
};
