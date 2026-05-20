class Solution {
public:
    vector<int> leftRightDifference(vector<int>& nums) {
        int n=nums.size();
        vector<int>ans(n,0);
        int k=1;
        if(n==1)return {0};
        int sum=0;
        for(int i:nums){
            sum+=i;
        }
        ans[0]=sum-nums[0];
        while(k<n){
            int i=k-1;
            int j=k+1;
            int left=0,right=0;

            while(j<n){
                right+=nums[j];
                j++;
            }

            while(i>=0){
                left+=nums[i];
                i--;
            }

            ans[k]=abs(left-right);
            k++;
        }
        return ans;
    }
};