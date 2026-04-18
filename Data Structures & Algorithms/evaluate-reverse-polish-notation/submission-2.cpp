class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> r;
        int i = 0;
        for (string s: tokens)
        {
            if (isdigit(s[0]) || isdigit(s[1]))
                r.push(stoi(s));
            else
            {
                int d1 = r.top();r.pop();
                int d2 = r.top();r.pop();
                if (s == "+")
                    r.push(d1 + d2);
                else if (s == "*")
                    r.push(d1 * d2);
                else if (s == "-")
                    r.push(d2 - d1);
                else if (s == "/")
                    r.push(d2 / d1);
            }
        }
        return r.top();
    }
};
