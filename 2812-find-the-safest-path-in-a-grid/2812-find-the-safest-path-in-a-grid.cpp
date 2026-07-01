class Solution {
public:
    int maximumSafenessFactor(vector<vector<int>>& grid) {
        int n = grid.size();
        vector<vector<int>> nearest(n, vector<int>(n, INT_MAX));
        queue<pair<int, int>> q;

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                if (grid[i][j] == 1) {
                    nearest[i][j] = 0;
                    q.push({i, j});
                }
            }
        }
        vector<pair<int, int>> dir = {{1, 0}, {-1, 0}, {0, 1}, {0, -1}};

        while (!q.empty()) {
            auto [x, y] = q.front();
            q.pop();

            for (auto [dx, dy] : dir) {
                int nx = x + dx;
                int ny = y + dy;
                if (nx < 0 || ny < 0 || nx >= n || ny >= n)
                    continue;
                if (nearest[nx][ny] != INT_MAX)
                    continue;
                nearest[nx][ny] = nearest[x][y] + 1;
                q.push({nx, ny});
            }
        }
        priority_queue<vector<int>> pq;
        vector<vector<int>> best(n, vector<int>(n, -1));

        pq.push({nearest[0][0], 0, 0});
        best[0][0] = nearest[0][0];

        while (!pq.empty()) {
            auto cur = pq.top();
            pq.pop();
            int safe = cur[0];
            int x = cur[1];
            int y = cur[2];
            if (x == n - 1 && y == n - 1)
                return safe;
            for (auto [dx, dy] : dir) {
                int nx = x + dx;
                int ny = y + dy;
                if (nx < 0 || ny < 0 || nx >= n || ny >= n)
                    continue;
                int val = min(safe, nearest[nx][ny]);
                if (val > best[nx][ny]) {
                    best[nx][ny] = val;
                    pq.push({val, nx, ny});
                }
            }
        }

        return 0;
    }
};