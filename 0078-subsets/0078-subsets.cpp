class Solution {
public:

   void solve(vector<int>& nums,vector<int>output,int indx,vector<vector<int>>&ans){
    if(indx>=nums.size()){
        ans.push_back(output);
        return;
    }

    solve(nums,output,indx+1,ans);

    int element=nums[indx];
    output.push_back(element);
    solve(nums,output,indx+1,ans);

   }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<int>output;
        vector<vector<int>>ans;
        int indx=0;
        solve(nums,output,indx,ans);

        return ans;
    }
};