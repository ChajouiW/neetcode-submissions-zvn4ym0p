class Solution {
public:
    bool isPalindrome(string s) {
        for (int i = 0, j = s.size() - 1; i <= j;)
        {
            if (!isalnum(s[i]) || !isalnum(s[j]))
            {
                i += (!isalnum(s[i]));
                j -= (!isalnum(s[j]));
                continue;
            }
            if (tolower(s[i]) != tolower(s[j]))
                return false;
            i++;
            j--;
        }
        return true;
    }
};
