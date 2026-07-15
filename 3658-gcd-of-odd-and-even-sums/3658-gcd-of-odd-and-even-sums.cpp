class Solution {
public:
    int gcdOfOddEvenSums(int n) {
        int od=0,ev=0;
        int cnt=0;
        for(int i=1;i<=2*n;i++){
            if(i%2==0){
                ev+=i;
            }else{
                od+=i;
            }
        }
        return gcd(od,ev);
    }
};