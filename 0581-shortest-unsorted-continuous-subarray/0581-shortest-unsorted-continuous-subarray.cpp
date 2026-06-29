class Solution {
public:
    int findUnsortedSubarray(vector<int>& nums) {
        int n = nums.size();

        int left = -1, right = -1;

        int mx = nums[0];
        for (int i = 1; i < n; i++) {
            mx = max(mx, nums[i]);
            if (nums[i] < mx)
                right = i;
        }

        int mn = nums[n - 1];
        for (int i = n - 2; i >= 0; i--) {
            mn = min(mn, nums[i]);
            if (nums[i] > mn)
                left = i;
        }

        if (left == -1)
            return 0;

        return right - left + 1;
    }
};