class Solution {
public:
    void dfs(vector<vector<int>>& grid, int y, int x)
    {
        if (x < 0 || y < 0 || x >= grid[0].size() || y >= grid.size() || grid[y][x] == 1)
            return ;
        grid[y][x] = 1;
        dfs(grid, y + 1, x);
        dfs(grid, y, x - 1);
        dfs(grid, y, x + 1);
        dfs(grid, y - 1, x);
    }
    int closedIsland(vector<vector<int>>& grid) {
        int h = grid.size(), w = grid[0].size(), ans = 0;
        for (int y = 0; y < h; y++)
        {  
            if (grid[y][0] == 0)
                dfs(grid, y, 0);
            if (grid[y][w - 1] == 0)
                dfs(grid, y, w - 1);
        }
        for (int x = 0; x < w; x++)
        {  
            if (grid[0][x] == 0)
                dfs(grid, 0, x);
            if (grid[h - 1][x] == 0)
                dfs(grid, h - 1, x);
        }

        for (int y = 0; y < h; y++)
        {
            for (int x = 0; x < w; x++)
            {
                if (grid[y][x] == 0)
                {
                    ans ++;
                    dfs(grid, y, x);
                }
            }
        }
        return ans;
    }
};
