class Solution {
public:
    int maximumSaleItems(vector<vector<int>>& items, int budget) {
        vector<int> freq(1501, 0);
        for (auto &x : items) freq[x[0]]++;
        vector<int> bonus(1501, 0);
        for (int f = 1; f <= 1500; f++) {
            for (int m = f; m <= 1500; m += f) {
                bonus[f] += freq[m];
            }
            bonus[f]--;
        }
        const int NEG = -1e9;
        vector<int> dp(budget + 1, NEG);
        dp[0] = 0;
        for (auto &it : items) {
            int f = it[0];
            int p = it[1];
            int b = bonus[f];
            vector<int> ndp = dp;
            for (int r = 0; r < p; r++) {
                int best = NEG;
                for (int m = 0, pos = r; pos <= budget; m++, pos += p) {
                    if (m > 0 && best != NEG) {
                        ndp[pos] = max(ndp[pos], b + m + best);
                    }
                    if (dp[pos] != NEG) {
                        best = max(best, dp[pos] - m);
                    }
                }
            }
            dp.swap(ndp);
        }
        return *max_element(dp.begin(), dp.end());
    }
};