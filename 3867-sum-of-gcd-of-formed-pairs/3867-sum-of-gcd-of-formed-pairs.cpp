class Solution {
public:
    long long gcdSum(vector<int>& nums) {
        int mx=nums[0];
        vector<int>prefix;
        for(int i=0;i<nums.size();i++){
            mx=max(mx,nums[i]);
            prefix.push_back(gcd(mx,nums[i]));
        }
        sort(prefix.begin(),prefix.end());
        long long sum=0;
        int i=0,j=prefix.size()-1;
        while(i<j){
            sum+=1LL*gcd(prefix[i],prefix[j]);
            i++;
            j--;
        }
        return sum;

    }
};