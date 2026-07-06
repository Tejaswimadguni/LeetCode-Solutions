class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int i=nums.size()-1;
        while(i>0 && nums[i-1]>=nums[i]){
            i--;
        }
        if(i==0){
            reverse(nums.begin(),nums.end());
            return;
        }
        int j=i,k=0;;
        while(j<nums.size()){
            if(nums[j]>nums[i-1]){
                k=j;
                j++;
            }else{
                j++;
            }
        }
        swap(nums[i-1],nums[k]);
        reverse(nums.begin()+i,nums.end());
        return ;

    }
};