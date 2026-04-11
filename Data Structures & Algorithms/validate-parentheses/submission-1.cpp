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
        stack <char> stak;
        for (char c: s)
        {
            if (c == '(' || c == '[' || c == '{')
                stak.push(c);
            else if (!stak.empty() && stak.top() == getOpening(c))
                stak.pop();
            else
                return false;
        }
        return stak.empty();
    }
};
