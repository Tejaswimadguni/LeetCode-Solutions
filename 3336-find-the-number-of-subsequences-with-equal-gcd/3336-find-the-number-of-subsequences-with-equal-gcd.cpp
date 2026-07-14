
class Solution {
public:
    static const int MOD = 1e9 + 7;

    int subsequencePairCount(vector<int>& nums) {
        int maxVal = *max_element(nums.begin(), nums.end());

        vector<vector<int>> dp(maxVal + 1, vector<int>(maxVal + 1, 0));
        dp[0][0] = 1;

        for (int num : nums) {
            vector<vector<int>> next = dp;

            for (int g1 = 0; g1 <= maxVal; g1++) {
                for (int g2 = 0; g2 <= maxVal; g2++) {

                    if (dp[g1][g2] == 0)
                        continue;
                    int newG1 = (g1 == 0) ? num : std::gcd(g1, num);
                    next[newG1][g2] =
                        (next[newG1][g2] + dp[g1][g2]) % MOD;
                    int newG2 = (g2 == 0) ? num : std::gcd(g2, num);
                    next[g1][newG2] =
                        (next[g1][newG2] + dp[g1][g2]) % MOD;
                }
            }
            dp = next;
        }
        long long ans = 0;
        for (int k = 1; k <= maxVal; k++) {
            ans = (ans + dp[k][k]) % MOD;
        }

        return ans;
    }
};