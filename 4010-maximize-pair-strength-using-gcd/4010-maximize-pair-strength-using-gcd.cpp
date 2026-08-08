class Solution {
    private:
    long long maxp(int a,int b){
        long long g=gcd(a,b);
        long long nums=(1LL*a*b)/(g*g);

        return nums;
    }
public:
    long long maxPairStrength(vector<int>& nums) {
        long long ans=0;
        for(int i=0;i<nums.size();i++){
            for(int j=i+1;j<nums.size();j++){
                ans=max(ans,maxp(nums[i],nums[j]));
            }
        }

        return ans;
    }
};