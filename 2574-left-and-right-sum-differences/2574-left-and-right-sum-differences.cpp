class Solution {
public:
    vector<int> leftRightDifference(vector<int>& nums) {
        int n=nums.size();
       vector<int>ans;
       int right=0;
       for(int i:nums){
        right+=i;
       }

       int left=0;
       for(int i=0;i<n;i++){
        right-=nums[i];
        int dif=abs(left-right);
        ans.push_back(dif);
        left+=nums[i];
       }
      return ans;
    }
};