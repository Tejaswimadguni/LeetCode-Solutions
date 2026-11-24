class Solution {
public:
    int maxLength(vector<int>& nums) {
        int n = nums.size();
        if (n <= 2) return n;

        int mx = *max_element(nums.begin(), nums.end());

        vector<int> spf(mx + 1);

        for (int i = 2; i <= mx; i++) {
            if (spf[i] == 0) {
                for (int j = i; j <= mx; j += i) {
                    if (spf[j] == 0)
                        spf[j] = i;
                }
            }
        }

        vector<vector<int>> factors(n);

        for (int i = 0; i < n; i++) {
            int x = nums[i];

            while (x > 1) {
                int p = spf[x];
                factors[i].push_back(p);

                while (x % p == 0)
                    x /= p;
            }
        }

        unordered_map<int, int> cnt;

        int left = 0;
        int ans = 2;

        for (int right = 0; right < n; right++) {

            bool conflict = true;

            while (conflict) {
                conflict = false;

                for (int p : factors[right]) {
                    if (cnt[p] > 0) {
                        conflict = true;
                        break;
                    }
                }

                if (conflict) {
                    for (int p : factors[left])
                        cnt[p]--;

                    left++;
                }
            }

            for (int p : factors[right])
                cnt[p]++;

            ans = max(ans, right - left + 1);
        }

        return ans;
    }
};