class Solution {
public:
    int minMoves(vector<int>& nums) {
        int minn=*max_element(nums.begin(),nums.end());
        int ans=0;
        for(int i:nums){
            ans+=minn-i;
        }

        return ans;

    }
};