
class Solution {

    private:
    bool exists(vector<vector<int>>& ans, vector<int>&nums) {
    for (auto &row : ans) {
        if (row == nums)
            return true;
    }
    return false;
}
    void solve(vector<int>nums,int indx,vector<vector<int>>&ans){
        if(indx>=nums.size()){
            if(!exists(ans,nums)){
            ans.push_back(nums);
            }
            return;
            
        }

        for(int i=indx;i<nums.size();i++){
            swap(nums[i],nums[indx]);
            solve(nums,indx+1,ans);
            swap(nums[i],nums[indx]);
        }

    }
public:
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        vector<vector<int>>ans;
        int indx=0;
        solve(nums,indx,ans);
        return ans;
    }
};