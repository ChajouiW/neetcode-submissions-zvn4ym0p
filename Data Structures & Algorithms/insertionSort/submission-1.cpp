// Definition for a Pair
// class Pair {
// public:
//     int key;
//     string value;
//
//     Pair(int key, string value) : key(key), value(value) {}
// };
class Solution {
public:
    vector<vector<Pair>> insertionSort(vector<Pair>& pairs) {
        if (pairs.empty())
            return {};
        vector<vector<Pair>> plist;
        for (int i = 1; i < pairs.size(); i++)
        {
            plist.push_back(pairs);
            for (int j = 0; j < i; j++)
            {
                if (pairs[i].key < pairs[j].key)
                {
                    Pair tmp(pairs[i].key, pairs[i].value);
                    pairs.erase(pairs.begin() + i);
                    pairs.insert(pairs.begin() + j, tmp);
                    break;
                }
            }
        }
        plist.push_back(pairs);
        return plist;
    }
};
