class Solution {
public:
    int alternateDigitSum(int n) {
        int sum=0;
        string ans=to_string(n);
        for(int i=0;i<ans.size();i++){
            if(i%2==0){
                sum+=ans[i]-'0';
            }else{
                sum-=ans[i]-'0';
            }
        }

        return sum;
    }
};