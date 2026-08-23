class Solution {
public:
    bool sumGame(string s) {
        int n=s.size();
        int mid=n/2;
        int lftq=0;
        int rtq=0;
        int lsum=0,rsum=0;

        int i=0,j=mid;
        while(i<mid && j<n){
            if(s[i]>='0'&& s[i]<='9'){
                lsum+=s[i]-'0';
                i++;
            }else{
                lftq++;
                i++;
            }
            if(s[j]>='0'&& s[j]<='9'){
                rsum+=s[j]-'0';
                j++;
            }else{
                rtq++;
                j++;
            }
            

        }
        int dif=lsum-rsum;
       if ((lftq + rtq) % 2 == 1)
    return true;

return 2 * dif != 9 * (rtq - lftq);

        


    }
};