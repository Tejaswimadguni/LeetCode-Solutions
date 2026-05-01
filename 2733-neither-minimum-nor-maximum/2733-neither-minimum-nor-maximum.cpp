class Solution {
public:
    int findNonMinOrMax(vector<int>& nums) {
         int n=nums .size();
    vector<int> ans;
    int i=1;
    sort(nums.begin(),nums.end());
    ans.push_back(nums[0]);
    while( i<n){
       if(nums[i]!=nums[i-1]){
        ans.push_back(nums[i]);
        i++;
       }else{i++;}

    } 
    if(ans.size()<3)return -1;
    return ans[1];

    }
};