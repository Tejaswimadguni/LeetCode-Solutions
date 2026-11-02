class Solution {
public:
    int minMoves(vector<int>& nums) {
        int maxx=*min_element(nums.begin(),nums.end());
        int ans=0;
        for(int i:nums){
            ans+=-1*maxx+i;
        }

        return ans;
    }
};