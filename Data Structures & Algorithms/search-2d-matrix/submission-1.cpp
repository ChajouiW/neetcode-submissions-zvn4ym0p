class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int r = 0, c = matrix[0].size() - 1;
        while (c >= 0 && r < matrix.size())
        {
            if (target < matrix[r][c])
                c--;
            else if (target > matrix[r][c])
                r++;
            else
                return true;
        }
        return false;
    }
};
