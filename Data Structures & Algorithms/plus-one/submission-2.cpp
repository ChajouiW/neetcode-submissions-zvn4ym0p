class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        if (digits[digits.size() - 1] != 9)
        {
            digits[digits.size() - 1]++;
            return digits;
        }
        vector<int> ans(digits.begin(), digits.end());
        int carry = 1;
        for (int i = digits.size() - 1; i >= 0; i--)
        {
            ans[i] = (ans[i] + carry) % 10;
            carry = ((digits[i] + carry) > 9);
        }
        if (carry)
            ans.insert(ans.begin(), 1);
        return ans;
    }
};
