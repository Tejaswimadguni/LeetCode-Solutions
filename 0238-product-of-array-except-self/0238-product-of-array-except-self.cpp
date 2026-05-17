class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n=nums.size();
        vector<int>ans(n,1);

        int p=1;
        for(int i=0;i<nums.size();i++){
            ans[i]=p;
            p*=nums[i];
        }
        int s=1;
        for(int i=nums.size()-1;i>=0;i--){
            ans[i]*=s;
            s*=nums[i];
        }
        return ans;
    }
};