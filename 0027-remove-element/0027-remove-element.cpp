class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
          vector<int> answer;
        int m=0;
        int s=nums.size();
        for(int i=0;i<nums.size();i++){
          if(nums[i]==val){
               m++;
          }
          
          }
          int ans=s-m;
          answer=nums;
          nums.clear();

     for(int i=0;i<answer.size();i++){
          if(answer[i]==val){
               continue;
          }
          nums.push_back(answer[i]);
     }
     return ans;
    }
};