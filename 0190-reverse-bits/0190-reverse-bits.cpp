class Solution {
public:
    int reverseBits(int n) {
         if (n == 0) return 0;

    string s;
    while (n > 0) {
        s += (n & 1) + '0';
        n >>= 1;
    }
     while (s.size() < 32)
            s += '0';
    int num = 0;
    for (char c : s) {
        num = num * 2 + (c - '0');
    }
    return num;

    }
};