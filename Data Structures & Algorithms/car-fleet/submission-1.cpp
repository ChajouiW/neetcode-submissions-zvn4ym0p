class Solution {
public:
    int carFleet(int target, vector<int>& position, vector<int>& speed) {
        vector<pair<int,int>> a;
        int n = speed.size();
        for (int i = 0; i < n; i++)
            a.push_back({position[i], speed[i]});
        sort(a.begin(), a.end());
        int old = 0, c = 1;
        for (int i = 0; i < n; i++)
        {
            int curr = ceil((double)(target - a[i].first) /  a[i].second);
            if (old > curr)
                c++;
            old = curr;
        }
        return c;
    }
};
