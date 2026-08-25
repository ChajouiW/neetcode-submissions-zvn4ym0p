class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        int r = 0,d2;
        for (string s: tokens)
        {
            if (isdigit(s[0]))
            {
                if (!r)
                    r = stoi(s);
                else
                    d2 = stoi(s);
            }
            else if (s == "+")
                r += d2;
            else if (s == "*")
                r *= d2;
            else if (s == "-")
                r -= d2;
            else if (s == "/")
                r /= d2;
        }
        return r;
    }
};
