class Solution {
public:
    string removeOuterParentheses(string s) {
       int c1=0,c2=0;
       string ans;
       for(char ch:s){
        if(ch=='('){
            c1++;

        }
        if(ch==')')c2++;
        if(c1>1 && ch=='(')ans+=ch;
        if(c2<c1 && ch==')')ans+=ch;

        if(c1==c2){c1=0,c2=0;}
       }
    return ans;
    }
};