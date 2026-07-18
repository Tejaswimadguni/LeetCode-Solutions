class Solution {
public:
    long long maxScore(vector<int>& nums) {
        int gc=nums[0];
        long long l=nums[0];
        for(int i=1;i<nums.size();i++){
            gc=gcd(gc,nums[i]);
             l = (l * nums[i]) / gcd(l, (long long)nums[i]);
        }
    long long ans=1LL*gc*l;
        for(int i=0;i<nums.size();i++){
            int first = (i == 0) ? 1 : 0;
            if (first >= nums.size()) return ans;
            int g=nums[first];
            long long lc=nums[first];
            for(int j=0;j<nums.size();j++){
                if(j==i)continue;
                g=gcd(g,nums[j]);
                lc = (lc * nums[j]) / gcd(lc, (long long)nums[j]);
            }
            ans=max(ans,1LL*g*lc);
        }

        return ans;
    }
};