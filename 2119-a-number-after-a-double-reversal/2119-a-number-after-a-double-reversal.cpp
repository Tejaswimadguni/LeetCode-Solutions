class Solution {

    private:
    int rev(int n){
        int num=0;
        while(n>0){
            int dig=n%10;
            num=num*10+dig;
            n/=10;
        }
        return num;
    }
public:
    bool isSameAfterReversals(int num) {
        int n=num;
        int n1=rev(num);
        int n2=rev(n1);
        if(n==n2)return true;

        return false;
    }
};