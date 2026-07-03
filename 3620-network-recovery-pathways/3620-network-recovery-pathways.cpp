class Solution {

    private:
     bool check(int mid, int n, vector<vector<int>>& edges, vector<bool>& online, long long k) {
        vector<vector<pair<int, int>>> adj(n);
        vector<int> range(n);

        for (auto &e : edges) {
            int u = e[0], v = e[1], w = e[2];

            if (w < mid) continue;
            if (v != n - 1 && !online[v]) continue;
            if (u != 0 && !online[u]) continue;

            adj[u].push_back({v, w});
            range[v]++;
        }

        queue<int> q;
        for (int i = 0; i < n; i++) {
            if (range[i] == 0)
                q.push(i);
        }

        vector<long long> dist(n, LLONG_MAX);
        dist[0] = 0;

        while (!q.empty()) {
            int u = q.front();
            q.pop();

            for (auto &[v, w] : adj[u]) {
                if (dist[u] != LLONG_MAX) {
                    dist[v] = min(dist[v], dist[u] + w);
                }
                range[v]--;
                if (range[v] == 0)
                    q.push(v);
            }
        }

        return dist[n - 1] <= k;
    }
public:
    int findMaxPathScore(vector<vector<int>>& edges, vector<bool>& online, long long k) {
         int n = online.size();

        int s = 0,  e= 0;
        for (auto &i : edges)
            e = max(e, i[2]);

        int ans = -1;

        while (s <= e) {
            int mid = s+ (e - s) / 2;

            if (check(mid, n, edges, online, k)) {
                ans = mid;
                s = mid + 1;
            } else {
                e = mid - 1;
            }
        }

        return ans;
    }
};