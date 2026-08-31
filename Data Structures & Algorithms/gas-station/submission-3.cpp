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
        long total = 0;
        for (int i = 0; i < n; i++)
        {
            total += diff[i];
            if (total < 0)
            {
                total = 0;
                ans = i + 1;
            }
        }
        return ans;
    }
};