class Solution {
public:
    static const int MOD = 1000000007;

    vector<int> sumAndMultiply(string s, vector<vector<int>>& queries) {
        vector<int> pos, dig;
        for (int i = 0; i < s.size(); i++) {
            if (s[i] != '0') {
                pos.push_back(i);
                dig.push_back(s[i] - '0');
            }
        }
        int n = dig.size();
        vector<long long> preSum(n + 1), preNum(n + 1), p(n + 1, 1);
        for (int i = 0; i < n; i++) {
            preSum[i + 1] = preSum[i] + dig[i];
            preNum[i + 1] = (preNum[i] * 10 + dig[i]) % MOD;
            p[i + 1] = (p[i] * 10) % MOD;
        }

        vector<int> ans;

        for (auto &q : queries) {
            int l = lower_bound(pos.begin(), pos.end(), q[0]) - pos.begin();
            int r = upper_bound(pos.begin(), pos.end(), q[1]) - pos.begin() - 1;

            if (l > r) {
                ans.push_back(0);
                continue;
            }
            long long sum = preSum[r + 1] - preSum[l];
            long long x = (preNum[r + 1] - preNum[l] * p[r - l + 1] % MOD + MOD) % MOD;

            ans.push_back(x * sum % MOD);
        }

        return ans;
    }
};