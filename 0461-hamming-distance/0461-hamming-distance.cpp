class Solution {
public:
    int hammingDistance(int x, int y) {
         int ans = x ^ y;
        int cnt = 0;

        while (ans) {
            cnt += ans & 1;
            ans >>= 1;
        }

        return cnt;
    }
};