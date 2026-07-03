class Solution {
public:

   void solve(vector<int>& nums,vector<int>output,int indx,vector<vector<int>>&ans){
    if(indx>=nums.size()){
        ans.push_back(output);
        return;
    }

 
    int next = indx + 1;
    while (next < nums.size() && nums[next] == nums[indx])
        next++;
       solve(nums,output,next,ans);

    int element=nums[indx];

    output.push_back(element);
    solve(nums,output,indx+1,ans);

   }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        vector<int>output;
        vector<vector<int>>ans;
        int indx=0;
        sort(nums.begin(),nums.end());
        solve(nums,output,indx,ans);

        return ans;
    }
};