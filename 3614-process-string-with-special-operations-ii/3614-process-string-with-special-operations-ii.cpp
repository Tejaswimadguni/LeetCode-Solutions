class Solution {
public:
    char processStr(string s, long long k) {
        int n = s.size();
        vector<long long> len(n);

        long long cur = 0;
        const long long LIM = 1e18;

        for(int i=0;i<n;i++) {
            char c = s[i];

            if('a' <= c && c <= 'z')
                cur++;
            else if(c == '*')
                cur = max(0LL, cur - 1);
            else if(c == '#')
                cur = min(LIM, cur * 2);
            else if(c == '%');

            len[i] = cur;
        }

        if(k >= cur) return '.';

        for(int i=n-1;i>=0;i--) {
            char c = s[i];

            long long prev = (i ? len[i-1] : 0);

            if('a' <= c && c <= 'z') {
                if(k == prev) return c;
            }
            else if(c == '#') {
                if(k >= prev) k -= prev;
            }
            else if(c == '%') {
                k = prev - 1 - k;
            }
        }

        return '.';
    }
};