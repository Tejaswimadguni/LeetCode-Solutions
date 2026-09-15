class Solution {
    private:
    void solve(vector<int>nums,int indx,vector<int>op,vector<vector<int>>& ans){

        if(indx>=nums.size()){
            ans.push_back(op);
            return;
        }

        solve(nums,indx+1,op,ans);

        op.push_back(nums[indx]);

        solve(nums,indx+1,op,ans);
    }
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>>ans;
        vector<int>op;
        int indx=0;
        solve(nums,indx,op,ans);
        return ans;
    }
};