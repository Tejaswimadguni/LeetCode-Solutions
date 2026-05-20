class Solution {
    private: const int MOD = 1e9 + 7;
    long long power(long long a, long long b) {
        long long res = 1;
        while(b > 0) {
            if(b & 1)
                res = (res * a) % MOD;
            a = (a * a) % MOD;
            b >>= 1;
        }
        return res;
    }
public:
    int countWays(vector<vector<int>>& ranges) {
         sort(ranges.begin(), ranges.end());

        int components = 0;

        int end = -1;

        for(auto &r : ranges) {

            int start = r[0];
            int stop = r[1];

            if(start > end) {
                components++;
            }

            end = max(end, stop);
        }
    return power(2,components);
    }
};