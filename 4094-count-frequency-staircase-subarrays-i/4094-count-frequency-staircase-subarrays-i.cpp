class Solution {
public:
    int countStaircase(vector<int>& arr) {
        int n = arr.size();
        int ans=0, k = 0;
        for (int i = 0; i < n; i++) {
            unordered_map<int, int> mp;
            vector<int> ordr;
            for (int j = i; j < n; j++) {
                if (mp[arr[j]] == 0) {
                    ordr.push_back(arr[j]);
                }
                mp[arr[j]]++;

                int k = ordr.size();
                if ((k * (k + 1)) / 2 != j - i + 1)
                    continue;
                bool valid = true;
                for (int x = 0; x < k; x++) {
                    if (mp[ordr[x]] != x + 1) {
                        valid = false;
                        break;
                    }
                }

                if (valid)
                    ans++;
            }
        }

        return ans;
    }
};