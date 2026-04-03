class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int n=nums.size();
        int ans=0;
        for(int i:nums){
            ans ^=i;
        }
        return ans;
    }
};