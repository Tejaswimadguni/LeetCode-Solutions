class Solution {
public:
    int maximumProduct(vector<int>& nums) {
        int n=nums.size()-1;
        if(n+1<3)return 0;
        sort(nums.begin(),nums.end());
        return max(nums[n-1]*nums[n]*nums[n-2],nums[0]*nums[1]*nums[n]);

    
    }
};