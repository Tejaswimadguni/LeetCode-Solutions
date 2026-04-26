class Solution {
public:
    vector<int> findValidElements(vector<int>& nums) {
        vector<int> valid;
        valid.push_back(nums[0]);
        int n=nums .size();
        int i=1;
        while(i<n){
          int j=0;
          int k=i+1;
          int left=0,right=0;
          while(j<i){
            if(nums[j]<nums[i]){
              left++;
              j++;
            }else{j++;}
          }
          while(k<n){
            if(nums[k]<nums[i]){
              right++;
              k++;
            }else{k++;}
          }
          if(left==i || right==n-i-1){
            valid.push_back(nums[i]);
          }
          i++;
        }
        return valid; 
    }
};