class Solution {
public:
    char getOpening(char c)
    {
        switch (c)
        {
            case ('}'):
                return '{';
            case (')'):
                return '(';
            case (']'):
                return '[';
            default: return 0;
        }
    }
    bool isValid(string s) {
        unordered_map <char, int> m;
        for (char c: s)
        {
            if (c == '(' || c == '[' || c == '{')
                m[c]++;
            else
                m[getOpening(c)]--;
            if (m[c] < 0)
                return false;
        }
        for (auto x: m)
            if (x.second != 0)
                return false;
        return true;
    }
};
