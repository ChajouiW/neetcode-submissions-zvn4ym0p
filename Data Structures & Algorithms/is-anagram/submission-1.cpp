class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map <int, int> map;
        unordered_map <int, int> map2;
        if (s.size() != t.size())
            return false;
        for (int i = 0; s[i]; i++)
        {
            map[s[i]]++;
            map2[t[i]]++;
        }
        for (int i = 0; t[i]; i++)
        {
            if (map[s[i]] != map2[s[i]])
                return false;
        }
        return true;
    }
};
