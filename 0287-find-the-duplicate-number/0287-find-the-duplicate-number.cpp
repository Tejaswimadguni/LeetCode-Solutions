class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int n=nums.size();
        vector<int>ans(n+1,-1);
        for(int i:nums){
            if(ans[i]==-1){
                ans[i]=1;
            }else{return i;}
        }
        return 0;
    }
};