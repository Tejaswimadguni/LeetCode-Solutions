class Solution {
public:
    int longestSubsequence(vector<int>& nums) {
        int n=nums.size();
        int ans=nums[0];

        for(int i=1;i<n;i++){
            ans^=nums[i];
        }
        if(ans!=0)return n;
        
        sort(nums.begin(),nums.end());
        if(nums[n-1]==0)return 0;
        
        return n-1;;

    }
};