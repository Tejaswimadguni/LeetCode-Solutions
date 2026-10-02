class Solution {

    private:
    void solve(vector<vector<int>>&ans,int indx,int sum,vector<int>&nums,vector<int>&output,int target,int k){
        if(sum==target && output.size()==k){
            ans.push_back(output);
            return;
        }
        if(indx>=nums.size() || sum>target)return;

        output.push_back(nums[indx]);
        solve(ans,indx+1,sum+nums[indx],nums,output,target,k);
        output.pop_back();
        solve(ans,indx+1,sum,nums,output,target,k);

    }
public:
    vector<vector<int>> combinationSum3(int k, int n) {
        vector<vector<int>>ans;
        vector<int>nums={1,2,3,4,5,6,7,8,9};
        vector<int>output;
        int indx=0,sum=0;
        solve(ans,indx,sum,nums,output,n,k);
        return ans;
    }
};