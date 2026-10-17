class Solution {
private:
    int dig(int n) {
        int ans = 0;
        while (n > 0) {
            ans += n % 10;
            n /= 10;
        }
        return ans;
    }

public:
    int minSwaps(vector<int>& nums) {
        int n = nums.size();

        vector<pair<int, int>> arr;

        for (int i = 0; i < n; i++) {
            arr.push_back({dig(nums[i]), nums[i]});
        }

        sort(arr.begin(), arr.end());

        unordered_map<int, int> mp;
        for (int i = 0; i < n; i++) {
            mp[arr[i].second] = i;
        }

        vector<bool> vis(n, false);
        int ans = 0;

        for (int i = 0; i < n; i++) {
            if (vis[i] || mp[nums[i]] == i)
                continue;

            int j = i;
            int cycle = 0;

            while (!vis[j]) {
                vis[j] = true;
                j = mp[nums[j]];
                cycle++;
            }

            if (cycle > 1)
                ans += cycle - 1;
        }

        return ans;
    }
};