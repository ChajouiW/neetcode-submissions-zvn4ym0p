class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int h = matrix.size(),w = matrix[0].size();
        for(int i = 0; i < h; i++)
        {
            for(int j = 0; j < w; j++)
            {
                if(matrix[i][j] == 0)
                {
                    matrix[i][0] = 0;
                    matrix[0][j] = 0;
                }
            }
        }
        for(int i = h - 1; i >= 0; i--)
        {
            for(int j = w - 1; j >= 0; j--)
            {
                cout << matrix[i][j] << ' ';
                if(matrix[i][0] == 0 || matrix[0][j] == 0)
                {
                    matrix[i][j] = 0;
                }
            }
        }
    }
};
