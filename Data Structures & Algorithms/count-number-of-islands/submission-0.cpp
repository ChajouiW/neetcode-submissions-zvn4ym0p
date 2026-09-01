class Solution {
public:
    void visitIsland(vector<vector<char>>& grid, int j, int i)
    {
        int n = grid.size(), m = grid[0].size();
        if (j < 0 || j >= n || i < 0 || i >= m)
            return;
        if (grid[j][i] == '0')
            return ;
        grid[j][i] = '0';
        visitIsland(grid, j, i + 1);
        visitIsland(grid, j, i - 1);
        visitIsland(grid, j + 1, i);
        visitIsland(grid, j - 1, i);
    }
    int numIslands(vector<vector<char>>& grid) {
        int n = grid.size(), m = grid[0].size();
        int count  = 0;
        for (int j = 0; j < n; j++)
        {
            for (int i = 0; i < m; i++)
            {
                if (grid[j][i] == '1')
                {
                    visitIsland(grid, j, i);
                    count++;
                }
            }
        }
        return count;
    }
};
