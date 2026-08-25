class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        if (digits[digits.size() - 1] != 9)
        {
            digits[digits.size() - 1]++;
            return digits;
        }
        vector<int> ans(digits.size() + 1, 1);
        for (int i = 0; i < digits.size(); i++)
        {
            if (digits[i] != 9)
                ans[i + 1] += digits[i];
            else
                ans[i + 1] = 0;
        }

        return ans;
    }
};
