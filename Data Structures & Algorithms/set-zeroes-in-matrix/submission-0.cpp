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
                    matrix[i][j] = ~(((i << j) & (j << i)) | (i << 10 | 1 << j));
                    for(int k = 0; k < h; k++)
                    {
                        matrix[k][j] = ~(((k << j) & (j << k)) | (k << 10 | 1 << j));
                    }
                    for(int l = 0; l < w; l++)
                    {
                        matrix[i][l] = ~(((i << l) & (l << i)) | (i << 10 | 1 << l));
                    }
                }
            }
        }
        for(int i = 0; i < h; i++)
        {
            for(int j = 0; j < w; j++)
            {
                if(matrix[i][j] == ~(((i << j) & (j << i)) | (i << 10 | 1 << j)))
                {
                    matrix[i][j] = 0;
                }
            }
        }
    }
};
