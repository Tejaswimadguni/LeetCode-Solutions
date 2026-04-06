class Solution {
public:
    int sumOfUnique(vector<int>& nums) {
         vector<int> ans(101,0);
        int sum=0;
        for(int i:nums)ans[i]++;
        for(int i=1;i<ans.size();i++){
            if(ans[i]==1){
                sum+=i;
            }
        }
        return sum;
    }
};