class Solution {
public:
    int characterReplacement(string s, int k) {
        vector<int> a(26);
        int m = 0, l = 0, ans = 0;
        for (int r = 0; s[r]; r++)
        {
            a[s[r]]++;
            m = max(m, a[s[r]]);
            while (k + m < r - l + 1)
                a[s[l++]]--;
            ans = max(ans, r - l + 1);
            cout << s[r] << ' '<<ans << endl;
        }
        return ans;
    }
};
