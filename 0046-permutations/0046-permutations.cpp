class Solution {

    private:
    void solve(vector<int>nums,int indx,vector<vector<int>>&ans){
        if(indx>=nums.size()){
            ans.push_back(nums);
            return;
        }

        for(int i=indx;i<nums.size();i++){
            swap(nums[i],nums[indx]);
            solve(nums,indx+1,ans);
            swap(nums[i],nums[indx]);
        }

    }
public:
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>>ans;
        int indx=0;
        solve(nums,indx,ans);
        return ans;
    }
};