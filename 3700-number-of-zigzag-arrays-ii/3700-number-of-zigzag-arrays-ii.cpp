class Solution {
public:
    static const long long MOD = 1e9 + 7;
    using Matrix = vector<vector<long long>>;
    Matrix multiply(const Matrix& A, const Matrix& B) {
        int n = A.size();
        Matrix C(n, vector<long long>(n, 0));
        for (int i = 0; i < n; i++) {
            for (int k = 0; k < n; k++) {
                if (!A[i][k]) continue;

                long long a = A[i][k];

                for (int j = 0; j < n; j++) {
                    if (!B[k][j]) continue;

                    C[i][j] =
                        (C[i][j] + a * B[k][j]) % MOD;
                }
            }
        }
        return C;
    }
    Matrix power(Matrix base, long long exp) {
        int n = base.size();

        Matrix res(n, vector<long long>(n, 0));
        for (int i = 0; i < n; i++) res[i][i] = 1;

        while (exp) {
            if (exp & 1) res = multiply(res, base);
            base = multiply(base, base);
            exp >>= 1;
        }
        return res;
    }

    int zigZagArrays(long long n, int l, int r) {
        int m = r - l + 1;

        int S = 2 * m;

        Matrix T(S, vector<long long>(S, 0));
        for (int v = 1; v <= m; v++) {
            for (int u = 1; u < v; u++) {
                T[v - 1][m + u - 1] = 1;
            }
        }
        for (int v = 1; v <= m; v++) {
            for (int u = v + 1; u <= m; u++) {
                T[m + v - 1][u - 1] = 1;
            }
        }

        vector<long long> state(S, 0);

        for (int v = 1; v <= m; v++) {
            state[v - 1] = v - 1;     
            state[m + v - 1] = m - v; 
        }

        Matrix P = power(T, n - 2);

        vector<long long> finalState(S, 0);
        for (int i = 0; i < S; i++) {
            for (int j = 0; j < S; j++) {
                finalState[i] =
                    (finalState[i] + P[i][j] * state[j]) % MOD;
            }
        }
        long long ans = 0;
        for (long long x : finalState)
            ans = (ans + x) % MOD;
        return (int)ans;
    }
};