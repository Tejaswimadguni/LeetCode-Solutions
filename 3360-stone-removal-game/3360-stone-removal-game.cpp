class Solution {
public:
    bool canAliceWin(int n) {
        if(n<10)return false;
        int fist=10;
        bool a=false;
        while(n>0){
            if(n<fist){
                a=false;
                break;
            }
            n=n-fist;
            fist--;
            if(n<fist){
                a=true;
                break;
            }else{
                n=n-fist;
                fist--;
            }
        }

        return a;
    }
};