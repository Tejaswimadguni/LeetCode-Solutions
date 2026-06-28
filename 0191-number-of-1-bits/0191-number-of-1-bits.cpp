class Solution {
public:
    int hammingWeight(int n) {
         string s;
    while (n > 0) {
        s += (n & 1) + '0';
        n >>= 1;
    }
    reverse(s.begin(),s.end());
    int cnt=0;
    for(char ch:s){
        if(ch=='1')cnt++;
    }

    return cnt;
    }
};