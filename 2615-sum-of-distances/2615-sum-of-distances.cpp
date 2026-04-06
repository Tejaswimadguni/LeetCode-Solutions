class Solution {
public:
    vector<long long> distance(vector<int>& nums) {
        int n = nums.size();
    vector<long long> ans(n);

    unordered_map<int, vector<int>> indx;

    for(int i=0;i<n;i++){
        indx[nums[i]].push_back(i);
    }

    for(auto &p : indx){
        vector<int> &val = p.second;
        int m = val.size();

        vector<long long> prefix(m);
        prefix[0] = val[0];

        for(int i=1;i<m;i++)
            prefix[i] = prefix[i-1] + val[i];

        for(int i=0;i<m;i++){

            long long left = (long long)val[i]*i - (i?prefix[i-1]:0);
            long long right = (prefix[m-1]-prefix[i]) - (long long)val[i]*(m-i-1);

            ans[val[i]] = left + right;
        }
    }

    return ans;
    }
};