class Solution {
public:
    int characterReplacement(string s, int k) {
        vector<int> a(26);
        int m = 0, l = 0, ans = 0;
        for (int r = 0; s[r]; r++)
        {
            a[s[r] - 'A']++;
            m = max(m, a[s[r] - 'A']);
            while (k + m < r - l + 1)
                a[s[l++] - 'A']--;
            ans = max(ans, r - l + 1);
        }
        return ans;
    }
};
