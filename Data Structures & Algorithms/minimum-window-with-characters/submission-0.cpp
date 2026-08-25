class Solution {
public:
    string minWindow(string s, string t) {
        vector<int> f(128), w(128);
        for (char c: t)
            f[c]++;
        string ans;
        int l = 0, mlen = 1e9, have = 0, need = t.size();
        pair<int, int> pos;
        for (int r = 0; s[r]; r++)
        {
            w[s[r]]++;
            if (f[s[r]] && f[s[r]] == w[s[r]])
                have++;
            while (have == need)
            {
                if (r - l + 1 < mlen)
                {
                    mlen = r - l + 1;
                    pos = {l, r};
                }
                w[s[l]]--;
                if (f[s[l]] && f[s[l]] > w[s[l]])
                    have--;
                l++;
            }
        }
        if (mlen != 1e9)
            return s.substr(l - 1, mlen);
        return "";
    }
};
