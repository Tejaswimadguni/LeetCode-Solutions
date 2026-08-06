class Solution {
private:
    int prdct(int n){
        int prd=1;
        while(n>0){
            prd*=n%10;
            n/=10;
        
        }
    return prd;
    }
public:
    int smallestNumber(int n, int t) {
        int num=prdct(n);
        if(num%t==0)return n;
        for(int i=n+1;i<=n+10;i++){
            int dig=prdct(i);
            if(dig%t==0)return i;
        }

        return 0;
    }
};