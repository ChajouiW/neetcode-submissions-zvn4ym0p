class Solution {
public:
    int search(vector<int>& nums, int target) {
        int mi = 0, ma = nums.size();

        while(mi < ma)
        {
            int mid = mi + (ma - mi) / 2;
            cout << mid << ' ' <<nums[mid] <<endl;
            if (nums[mid] > target)
                ma = mid;
            else
                mi = mid + 1;
        }
        if (mi > 0 && nums[mi - 1] == target)
            return mi - 1;
        return -1;
    }
};
