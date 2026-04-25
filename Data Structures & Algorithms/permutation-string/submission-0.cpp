class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        vector<int> a(26);
        for (char c: s1)
            a[c - 'a']++;
        int v = 0,l = 0, size = s1.size();
        for (int r = 0; s2[r]; r++)
        {
            a[s2[r] - 'a']--;
            if (a[s2[r] - 'a'] >= 0)
                v++;
            if (v == size)
                return true;
            while (r - l + 1 >= size)
            {
                a[s2[l] - 'a']++;
                if (a[s2[l++] - 'a'] > 0)
                    v--;
            }
        }
        return false;
    }
};
