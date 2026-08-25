class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        if (digits[digits.size() - 1] != 9)
        {
            digits[digits.size() - 1]++;
            return digits;
        }
        int j = digits.size() + (digits[0] == 9);
        vector<int> ans(j, 1);
        int carry = 1;
        for (int i = digits.size() - 1; i >= 0; i--)
        {
            if (digits[i] != 9)
            {
                ans[j - 1] = digits[i] + carry;
                carry = 0;
            }
            else
            {
                ans[j - 1] = 0;
                carry = 1;
            }
            j--;
        }
        return ans;
    }
};
