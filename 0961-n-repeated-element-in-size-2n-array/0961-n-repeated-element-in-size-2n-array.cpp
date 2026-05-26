class Solution {
public:
    int repeatedNTimes(vector<int>& nums) {
        int m=nums.size();
        int n=m/2;

        unordered_map<int,int>ans;
        for(int i:nums){
            ans[i]++;
        }

        for(auto & i:ans){
            if(i.second==n)return i.first;
        }

        return -1;
    }
};