class Solution {

    private:
    int reverseNumber(int n) {
    int rev = 0;

    while (n > 0) {
        int digit = n % 10;
        rev = rev * 10 + digit;
        n /= 10;
    }

    return rev;
}
public:
    long long sumAndMultiply(int n) {
        int sum=0;
        int product=0;
        while(n>0){
            int digit=n%10;
            if(digit==0){
                n/=10;
                continue;}
            sum+=digit;
            product=product*10+digit;
            n/=10;
        }
        int revers=reverseNumber(product);
        long long ans = 1LL * sum * revers;

        return ans;
    }
};