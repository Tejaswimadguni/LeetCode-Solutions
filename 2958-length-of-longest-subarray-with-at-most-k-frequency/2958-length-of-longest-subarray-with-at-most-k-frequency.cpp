class Solution {
public:
    int maxSubarrayLength(vector<int>& nums, int k) {
        unordered_map<int,int>frq;
        int ans=0;
        int j=0;
        for(int i=0;i<nums.size();i++){
            frq[nums[i]]++;
            while(frq[nums[i]]>k){
                frq[nums[j]]--;
                j++;
            }
            ans=max(ans,i-j+1);
        }
        return ans;
    }
};