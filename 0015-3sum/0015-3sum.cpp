class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>>ans;
        sort(nums.begin(),nums.end());
        int n=nums.size();
       for(int f=0;f<n;f++){
        if(f>0 && nums[f]==nums[f-1])continue;
        int i=f+1;
        int j=n-1;
        while(i<j){
            int sum=nums[f]+nums[i]+nums[j];
            if(sum==0){
                ans.push_back({nums[f],nums[i],nums[j]});
            
            i++;
            j--;
            while (i < j && nums[i] == nums[i - 1]) i++;
            while (i < j && nums[j] == nums[j + 1])j--;
            }else if(sum<0)i++;
            else{j--;}
            
        }
       }
       return ans;
    }
};