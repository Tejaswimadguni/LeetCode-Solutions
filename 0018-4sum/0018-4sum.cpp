class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums,int target) {
        vector<vector<int>>ans;
        sort(nums.begin(),nums.end());
        int n=nums.size();
    for(int f=0;f<n-3;f++){
        if(f>0 && nums[f]==nums[f-1])continue;
       for(int s=f+1;s<n-2;s++){
        if(s>f+1 && nums[s]==nums[s-1])continue;
        int i=s+1;
        int j=n-1;
        while(i<j){
            long long sum=1LL*nums[s]+nums[i]+nums[j]+nums[f];
            if(sum==target){
                ans.push_back({nums[f],nums[s],nums[i],nums[j]});
            
            i++;
            j--;
            while (i < j && nums[i] == nums[i - 1]) i++;
            while (i < j && nums[j] == nums[j + 1])j--;
            }else if(sum<target)i++;
            else{j--;}
            
        }
       }
    }
       return ans;
    }
};