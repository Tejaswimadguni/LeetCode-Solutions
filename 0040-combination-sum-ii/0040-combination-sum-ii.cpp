class Solution {

    private:
    void solve(vector<vector<int>>&ans,int indx,int sum,vector<int>&nums,vector<int>&output,int target){
        if(sum==target){
            ans.push_back(output);
            return;
        }
        for(int i=indx;i<nums.size();i++){
            if(i>indx && nums[i]==nums[i-1])continue;

            if(sum+nums[i]>target)return;
            output.push_back(nums[i]);
            solve(ans,i+1,sum+nums[i],nums,output,target);
            output.pop_back();
        }

    }
public:
    vector<vector<int>> combinationSum2(vector<int>&nums, int n) {
        vector<vector<int>>ans;
        vector<int>output;
        int indx=0,sum=0;
        sort(nums.begin(),nums.end());
        solve(ans,indx,sum,nums,output,n);
        return ans;
    }
};