class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures)
    {
        int size = temperatures.size();
        stack<pair<int, int>> st;
        vector<int> ans(size);
        for (int i = 0; i < size; i++)
        {
            int t = temperatures[i];
            while (!st.empty() && t > st.top().first)
            {
                auto p = st.top();
                ans[p.second] = i - p.second;
                st.pop();
            }
            st.push({t, i});
        }
        return ans;
    }
};
