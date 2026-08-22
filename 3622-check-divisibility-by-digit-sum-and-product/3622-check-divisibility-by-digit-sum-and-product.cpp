class Solution {
public:
    bool checkDivisibility(int n) {
        int summ=0,pro=1;
        int k=n;
        while(n>0){
            int digit=n%10;
            summ+=digit;
            pro*=digit;
            n/=10;
        }
        int sum=summ+pro;

        return (k%sum)==0;
    }
};