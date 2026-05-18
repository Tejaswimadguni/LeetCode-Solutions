class Solution {
public:
    int dominantIndex(vector<int>& nums) {
        int n=nums.size();
        vector<int>ans(n);
        ans=nums;
        sort(ans.begin(),ans.end());
        if(ans[n-1]<ans[n-2]*2)return -1;
        for(int i=0;i<n;i++){
            if(nums[i]==ans[n-1])return i;
        }
        return -1;
    }
};