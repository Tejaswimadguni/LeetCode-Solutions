class Solution {
public:
    int countTriples(int n) {
        int cnt=0;
        for(int i=1;i<=n;i++){
            for(int j=1;j<=n;j++){
                long long num=i*i+j*j;
                int k=sqrt(num);
                if(k*k==num && k<=n)cnt++;
            }
        }

        return cnt;
    }
};