class Solution {
    private:
    bool isprime(int n) {
    if(n <= 1) return false;

    for(int i = 2; i * i <= n; i++) {
        if(n % i == 0) return false;
    }

    return true;
}
public:
    int sumOfPrimesInRange(int n) {
        int rev=0,sum=0,k=n;
          while (n != 0) {
        int digit=n%10;
        n/=10;
        rev=rev*10+digit;
    }
      int st=min(rev,k);
        int end=max(rev,k);
        for(int i=st;i<=end;i++){
            if(isprime(i))sum+=i;
        }
        return sum;
    }
};