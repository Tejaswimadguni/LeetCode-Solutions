class Solution {
public:
    static const int MOD = 1e9 + 7;

    int zigZagArrays(int n, int l, int r) {
        int m = r - l + 1;

        vector<long long> up(m + 1), down(m + 1);
        vector<long long> nu(m + 1), nd(m + 1);

        for (int x = 1; x <= m; x++) {
            up[x] = x - 1;
            down[x] = m - x;
        }

        for (int len = 3; len <= n; len++) {

            long long prefUp = 0;
            long long prefDown = 0;

            long long totalUp = 0;
            for (int i = 1; i <= m; i++)
                totalUp = (totalUp + up[i]) % MOD;

            for (int x = 1; x <= m; x++) {
                prefUp = (prefUp + up[x]) % MOD;

                nu[x] = prefDown;

                nd[x] = (totalUp - prefUp + MOD) % MOD;

                prefDown = (prefDown + down[x]) % MOD;
            }

            swap(up, nu);
            swap(down, nd);
        }

        long long ans = 0;

        for (int x = 1; x <= m; x++) {
            ans = (ans + up[x] + down[x]) % MOD;
        }

        return (int)ans;
    }
};