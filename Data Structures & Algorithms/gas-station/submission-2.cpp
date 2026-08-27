class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int ans = 0;
        int n = gas.size();
        vector<int> diff(n);
        long psg = 0, psc = 0;
        for (int i = 0; i < n; i++)
        {
            diff[i] = gas[i] - cost[i];
            psg += gas[i];
            psc += cost[i];
        }
        if (psg < psc)
            return -1;
        int total = 0;
        for (int i = 0; i < n; i++)
        {
            total += diff[i];
            if (total < 0)
            {
                ans = i + 1;
                total = 0;
            }
        }
        return ans;
    }
};
// 1 2 3 4  1  2  3  4
// 2 2 4 1  2  2  4  1
// 1 3 6 10 11 13 16 20
// 2 4 8 9 11 13 17 18
// 1 2 3
// 2 3 2
// 1 3 6
// 2 5 7