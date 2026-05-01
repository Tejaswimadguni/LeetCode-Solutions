class Solution {
public:
    int thirdMax(vector<int>& nums) {
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
    int m=ans.size();
    if(ans.size()<3){
        return ans[m-1];
    }
    
        return ans[m-3];
    }
};