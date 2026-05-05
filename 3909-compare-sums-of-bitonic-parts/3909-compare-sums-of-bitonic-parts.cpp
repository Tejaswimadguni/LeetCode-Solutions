class Solution {
public:
    int compareBitonicSums(vector<int>& nums) {
         long long int s1=0,s2=0;
        int pivot=0;
    int i=0,pvt=0;
      while(i<nums.size()-1 && nums[i]<nums[i+1]){
          s1+=nums[i];
          i++;
      }
        pvt=i;
    for(int j=i;j<nums.size();j++){
        s2+=nums[j];
    }
        s1+=nums[i];
        
        if(s1>s2)return 0;
        if(s1<s2)return 1;

        return -1;
    }
};