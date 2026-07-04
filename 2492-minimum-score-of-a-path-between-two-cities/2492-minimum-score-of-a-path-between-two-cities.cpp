class Solution {
public:
    void dfs(int node, vector<vector<pair<int,int>>>& adj,
             vector<int>& nodes, int& ans) {

        nodes[node] = 1;

        for (auto& it : adj[node]) {
            int nei = it.first;
            int wt = it.second;

            ans = min(ans, wt);

            if (!nodes[nei])
                dfs(nei, adj, nodes, ans);
        }
    }

    int minScore(int n, vector<vector<int>>& roads) {

        vector<vector<pair<int,int>>> adj(n + 1);

        for (auto& r : roads) {
            adj[r[0]].push_back({r[1], r[2]});
            adj[r[1]].push_back({r[0], r[2]});
        }

        vector<int> nodes(n + 1, 0);
        int ans = INT_MAX;

        dfs(1, adj, nodes, ans);

        return ans;
    }
};