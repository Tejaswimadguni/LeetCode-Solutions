class Solution {
public:
    double myPow(double x, int n) {
           double ans = 1;

        if(n==0)return 1;
        if(x==0)return 0;
        if(n==1)return x;  

        long long p = n;

        if (p < 0) {
            x = 1 / x;
            p = -p;
        }
       
        while (p > 0) {

            if (p % 2 == 1)
                ans *= x;

            x *= x;
            p /= 2;
        }

        return ans;
    
    }
};