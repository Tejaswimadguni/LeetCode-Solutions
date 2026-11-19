class Solution {
public:
    int minimizeSum(vector<int>& nums) {
         sort(nums.begin(), nums.end());

        int n = nums.size();
        if(n<=3)return 0;
        int ans = INT_MAX;

        for(int i = 0; i < 3; i++) {
            ans = min(ans, nums[n - 3 + i] - nums[i]);
        }

        return ans;
    }
};