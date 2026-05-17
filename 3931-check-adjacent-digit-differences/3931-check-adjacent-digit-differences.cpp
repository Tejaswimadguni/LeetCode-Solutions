class Solution {
    private: int its(char ch){
  int num = ch - '0';
  return num;
    }
public:
    bool isAdjacentDiffAtMostTwo(string s) {
        int  i=0;
        bool ans=false;
        while(i<s.size()-1){
            int n1=its(s[i]);
            int n2=its(s[i+1]);
            if(abs(n2-n1)<=2){
                ans=true;
            }else{return false;}
           i++;
        }
         return true;
    }
};