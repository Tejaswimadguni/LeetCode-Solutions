class Solution {
public:
    int minimumSum(vector<int>& nums) {
        int ans=INT_MAX;
        for(int i=0;i<nums.size();i++){
           for(int j=i+1;j<nums.size();j++){
            if(nums[i]<nums[j]){
                for(int k=j+1;k<nums.size();k++){
                    if(nums[k]<nums[j]){
                        int sum=nums[i]+nums[j]+nums[k];
                        ans=min(sum,ans);
                    }
                }
            }
           }
        }
        if(ans==INT_MAX)return -1;
        return ans;
    }
};