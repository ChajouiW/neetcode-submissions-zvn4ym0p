class Solution {
public:
    int search(vector<int>& nums, int target) {
        int mi = 0, ma = nums.size() - 1;
        while(mi < ma)
        {
            int mid = (mi + ma) / 2;
            if (nums[mid] > target)
                ma = mid;
            else if (nums[mid] < target)
                mi = mid + 1;
            else if (nums[mid] == target)
                return mid;
            
        }
        return -1;
    }
};
