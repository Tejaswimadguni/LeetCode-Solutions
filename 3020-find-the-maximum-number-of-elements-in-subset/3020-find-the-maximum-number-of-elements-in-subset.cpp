class Solution {
public:
    int maximumLength(vector<int>& nums) {
        unordered_map<long long, int> cnt;
        for (int x : nums) cnt[x]++;
        int ans = 1;
        if (cnt.count(1)) {
            int c = cnt[1];
            ans = max(ans, (c % 2 == 0) ? c - 1 : c);
        }

        for (auto &[start, f] : cnt) {
            if (start == 1) continue;

            long long cur = start;
            int len = 0;

            while (cnt.count(cur)) {
                if (cnt[cur] >= 2) {
                    len += 2;
                    if (cur > 1000000000LL / cur) break;
                    cur = cur * cur;
                } else {
                    len += 1;
                    break;
                }
            }
            if (len % 2 == 0) len--;
            ans = max(ans, len);
        }

        return ans;
    }
};