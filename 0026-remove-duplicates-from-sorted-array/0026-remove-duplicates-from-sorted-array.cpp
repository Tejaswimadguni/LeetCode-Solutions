class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
             vector<int>ans;
        int m=0;
        int s=0;
        for(int i=0;i<nums.size();i++){
          s+=m;
          m=0;
          for(int j=s;j<nums.size();j++){
               if(nums[i]==nums[j]){
                    m++;
               }
               
          }
          if(m>=1){
                    ans.push_back(nums[i]);
          }
        }
        nums.clear();
        nums=ans;
        return ans.size();
    }
    
};