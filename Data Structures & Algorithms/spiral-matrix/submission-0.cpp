class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int r = 0,l = 0,up = 0,d = 0;
        vector<int> ans;
        int w = matrix[0].size(), h = matrix.size();
        int x = 0, y = 0;
        while (ans.size() < w * h)
        {
            cout << ans.size() << endl;
            while (x < w - r)
                ans.push_back(matrix[y][x++]);
            if (ans.size() >= w * h)
                break;
            x--;
            y++;
            r++;
            while (y < h - d)
                ans.push_back(matrix[y++][x]);
            if (ans.size() >= w * h)
                break;
            y--;
            x--;
            d++;
            while (x - l>= 0)
                ans.push_back(matrix[y][x--]);
            if (ans.size() >= w * h)
                break;
            x++;
            y--;
            l++;
            while (y - up > 0)
                ans.push_back(matrix[y--][x]);
            if (ans.size() >= w * h)
                break;
            y++;
            x++;
            up++;
        }
        return ans;
    }
};
