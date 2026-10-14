class Solution {

private:
   
public:
    string maxSumOfSquares(int num, int sum) {
        int ssum=sum;
        if(sum==0)return "";
        if(num<2 && sum>9)return "";
        if(num<2 && sum<=9)return to_string(sum);
        if(sum>num*9)return "";
        string ans;
        while(num && ssum>0){
            if(ssum>=9){
                ans+='9';
                ssum-=9;
            }else{
                ans+=to_string(ssum);
                num--;
                break;
            }
            num--;
            
        }
        while(num--){
            ans+='0';
        }

        return ans;

    }
};