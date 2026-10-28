class Solution {
private:
    long long maxnum(int n) {
        string s = to_string(n);
        sort(s.begin(), s.end(), greater<char>());

        return stoll(s);
    }

public:
    long long maximizeSum(vector<int>& nums, int k) {
        vector<long long>gain;
        for(int i=0;i<nums.size();i++){
            gain.push_back(maxnum(nums[i])-nums[i]);
        }

        sort(gain.begin(),gain.end(),greater<int>());
        long long ans=0;
        int j=0;

        while(k--){
            ans+=gain[j++];
        }
        for(int i:nums){
            ans+=i;
        }
       
        return ans;
    }
};