class Solution {
private:    
    int sums(int n) {
    int sum = 0;

    while (n > 0) {
        sum += n % 10;
        n /= 10;
    }

    return sum;
}



public:
    int getLucky(string s, int k) {
       int ans=0;
        for(char ch:s){
            int pos = ch - 'a' + 1;
            ans+=sums(pos);
        }

        while(k-1>0){
            ans=sums(ans);
            k--;
        }
    return ans;

    }
};