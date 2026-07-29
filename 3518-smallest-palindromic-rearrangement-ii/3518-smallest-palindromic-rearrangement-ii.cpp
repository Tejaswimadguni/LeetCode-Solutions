
class Solution {
public:
    using ll = long long;
    ll LIMIT;

    ll countPerm(vector<int>& f) {
        int total = 0;
        for (int x : f) total += x;

        long double ans = 1;
        int rem = total;

        for (int x : f) {
            for (int i = 1; i <= x; i++) {
                ans *= (rem - x + i);
                ans /= i;
                if (ans >= LIMIT) return LIMIT;
            }
            rem -= x;
        }
        return min((ll)(ans + 0.5), LIMIT);
    }

    string smallestPalindrome(string s, int k) {
        LIMIT = k;

        vector<int> freq(26);
        for (char c : s) freq[c - 'a']++;

        string mid = "";
        for (int i = 0; i < 26; i++) {
            if (freq[i] % 2) mid += char(i + 'a');
            freq[i] /= 2;
        }

        if (countPerm(freq) < k) return "";

        string left;

        while (left.size() < s.size() / 2) {
            for (int i = 0; i < 26; i++) {
                if (!freq[i]) continue;

                freq[i]--;
                ll cnt = countPerm(freq);

                if (cnt >= k) {
                    left += char(i + 'a');
                    break;
                }

                k -= cnt;
                freq[i]++;
            }
        }

        string right = left;
        reverse(right.begin(), right.end());

        return left + mid + right;
    }
};