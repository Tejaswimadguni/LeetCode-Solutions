class Solution {
public:
    bool canJump(vector<int>& nums) {
           int maxr=0;
      int n=nums.size();
      for(int i=0;i<n;i++){
        if(i>maxr){
          return false;
        }
        maxr=max(maxr,i+nums[i]);
        if(maxr>=n-1){
          return true;
        }
      }
      return true;
    }
};