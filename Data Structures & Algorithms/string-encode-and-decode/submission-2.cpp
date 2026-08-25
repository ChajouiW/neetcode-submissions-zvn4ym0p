class Solution {
public:

    string encode(vector<string>& strs) {
        string r;
        for (string s:strs)
        {
            int l = s.size();
            string ss = "/" + to_string(l) + '/';
            for (int i = 0; s[i]; i++)
                ss += char(s[i] + l);
            ss += '/';
            cerr << ss << endl;
            r.append(ss);
        }
        return r;
    }

    vector<string> decode(string s) {
        vector<string> r;
        for (int i = 0; s[i]; i++)
        {
            if (s[i] == '/' && isdigit(s[i + 1]))
            {
                i++;
                string len;
                while(isdigit(s[i]))
                    len += s[i++];
                int l = atoi(len.c_str());
                string ss = s.substr(i + 1, l);
                for (int j = 0; ss[j]; j++)
                    ss[j] -= l;
                cerr << ss << endl;
                r.push_back(ss);
            }
        }
        return r;
    }
};
