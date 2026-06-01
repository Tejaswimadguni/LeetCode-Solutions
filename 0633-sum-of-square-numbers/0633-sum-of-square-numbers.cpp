class Solution {
public:
    bool judgeSquareSum(int c) {
        int st=0,end=sqrt(c);
        while(st<=end){
            long long int a=st*st;
            long long int b=end*end;
            if(a+b==c)return true;
            else if(c>(a+b))st++;
            else{end--;}
        }
        return false;
    }
};