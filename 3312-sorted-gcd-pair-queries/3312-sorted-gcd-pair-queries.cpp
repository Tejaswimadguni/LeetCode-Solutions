class Solution {
public:
    vector<int> gcdValues(vector<int>& nums, vector<long long>& queries) {

        int mx = *max_element(nums.begin(), nums.end());

        vector<int> f(mx + 1, 0);
        for (int x : nums)
            f[x]++;

        vector<long long> cnt(mx + 1, 0);

        for (int i = mx; i >= 1; i--) {

            long long c = 0;

            for (int j = i; j <= mx; j += i)
                c += f[j];

            cnt[i] = c * (c - 1) / 2;

            for (int j = 2 * i; j <= mx; j += i)
                cnt[i] -= cnt[j];
        }

        vector<long long> pre(mx + 1, 0);

        for (int i = 1; i <= mx; i++)
            pre[i] = pre[i - 1] + cnt[i];

        vector<int> ans;

        for (long long q : queries) {
            int x = lower_bound(pre.begin() + 1, pre.end(), q + 1) - pre.begin();
            ans.push_back(x);
        }

        return ans;
    }
};