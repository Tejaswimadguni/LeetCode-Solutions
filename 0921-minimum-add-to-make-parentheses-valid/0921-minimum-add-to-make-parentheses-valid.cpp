class Solution {
public:
    int minAddToMakeValid(string s) {
        int count=0;
        int count1=0;
        for(char ch:s){
            if(ch=='(')count++;
            else if(ch==')' && count>0)count--;
            else{count1++;};
        }
        
        return abs(count)+abs(count1);
        
    }
};