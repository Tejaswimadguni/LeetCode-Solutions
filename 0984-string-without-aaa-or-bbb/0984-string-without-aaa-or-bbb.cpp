class Solution {
public:
    string strWithout3a3b(int a, int b) {
        string ans="";
        while(a>0 || b>0){
            if(a>b){
                if (!(ans.size() >= 2 &&
                ans[ans.size() - 1] == 'a' &&
                ans[ans.size() - 2] == 'a')) {
                    ans += 'a';
                     a--;
                }else{
                    ans+='b';
                b--;}
               
            }else if( b>a){
                if (!(ans.size() >= 2 &&
                ans[ans.size() - 1] == 'b' &&
                ans[ans.size() - 2] == 'b')) {
                    ans += 'b';
                    b--;
                }else{
                    ans+='a';
                    a--;
                    }
            }else {  
                 if (!(ans.size() >= 2 &&
                 ans[ans.size()-1] == 'a' &&
                 ans[ans.size()-2] == 'a')) {
                 ans += 'a';
                 a--;
                } else {
                  ans += 'b';
                 b--;
                }
            }
        }

        return ans;
    }
};