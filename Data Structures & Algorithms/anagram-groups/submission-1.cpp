class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs)
    {
        unordered_map <string, vector<string>> map;
        int size = strs.size();
        for (int i = 0; i < size; i++)
        {
            string s = strs[i];
            sort(s.begin(), s.end());
            map[s].push_back(strs[i]);
        }
        vector<vector<string>> r;
        for (auto pair: map)
            r.push_back(pair.second);
        return r;
    }
};
