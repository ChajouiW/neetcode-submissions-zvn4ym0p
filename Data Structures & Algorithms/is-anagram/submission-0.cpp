class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map <int, int> map;
        if (s.size() != t.size())
            return false;
        for (int i = 0; s[i]; i++)
        {
            map[s[i]] = 1;
        }
        for (int i = 0; t[i]; i++)
        {
            if (!map[t[i]])
                return false;
        }
        return true;
    }
};
