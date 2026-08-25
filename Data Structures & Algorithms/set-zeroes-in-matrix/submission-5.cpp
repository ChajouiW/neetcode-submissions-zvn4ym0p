class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int h = matrix.size(),w = matrix[0].size();
        bool flag = false;
        for(int i = 0; i < h; i++)
        {
            // if (matrix[i][0] == 0)
            //     flag = true;
            for(int j = 1; j < w; j++)
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
            for(int j = w - 1; j >= 1; j--)
            {
                cout << matrix[i][j] << ' ';
                if(matrix[i][0] == 0 || matrix[0][j] == 0)
                {
                    matrix[i][j] = 0;
                }
            }
            // if (flag)
            //     matrix[i][0] = 0;
        }
    }
};
