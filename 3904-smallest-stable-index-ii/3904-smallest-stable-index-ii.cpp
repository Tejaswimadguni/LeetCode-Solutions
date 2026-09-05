class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
         int n = nums.size();

        if(n == 1)
            return 0;

        vector<int> Min(n);

        Min[n - 1] = nums[n - 1];

        for(int i = n - 2; i >= 0; i--) {
            Min[i] = min(nums[i], Min[i + 1]);
        }

        int maxx = nums[0];

        for(int i = 0; i < n; i++) {

            maxx = max(maxx, nums[i]);

            int minn = Min[i];

            if(maxx - minn <= k)
                return i;
        }

        return -1;

    }
};