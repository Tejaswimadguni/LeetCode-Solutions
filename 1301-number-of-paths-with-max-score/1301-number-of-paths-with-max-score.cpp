class Solution {
public:
    int mod = 1e9 + 7;

    vector<int> pathsWithMaxScore(vector<string>& board) {
        int n = board.size();
        vector<vector<int>> dp(n, vector<int>(n, -1));
        vector<vector<int>> ways(n, vector<int>(n, 0));
        dp[0][0] = 0;
        ways[0][0] = 1;

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                if (board[i][j] == 'X') continue;
                if (i == 0 && j == 0) continue;
                int best = -1;
                int cnt = 0;
                if (i > 0 && dp[i - 1][j] != -1) {
                    if (dp[i - 1][j] > best) {
                        best = dp[i - 1][j];
                        cnt = ways[i - 1][j];
                    } else if (dp[i - 1][j] == best) {
                        cnt = (cnt + ways[i - 1][j]) % mod;
                    }
                }
                if (j > 0 && dp[i][j - 1] != -1) {
                    if (dp[i][j - 1] > best) {
                        best = dp[i][j - 1];
                        cnt = ways[i][j - 1];
                    } else if (dp[i][j - 1] == best) {
                        cnt = (cnt + ways[i][j - 1]) % mod;
                    }
                }
                if (i > 0 && j > 0 && dp[i - 1][j - 1] != -1) {
                    if (dp[i - 1][j - 1] > best) {
                        best = dp[i - 1][j - 1];
                        cnt = ways[i - 1][j - 1];
                    } else if (dp[i - 1][j - 1] == best) {
                        cnt = (cnt + ways[i - 1][j - 1]) % mod;
                    }
                }

                if (best == -1) continue;
                if (board[i][j] >= '1' && board[i][j] <= '9')
                    best += board[i][j] - '0';

                dp[i][j] = best;
                ways[i][j] = cnt;
            }
        }
        if (ways[n - 1][n - 1] == 0){
            return {0, 0};}

        return {dp[n - 1][n - 1], ways[n - 1][n - 1]};
    }
};