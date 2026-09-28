class Solution {
public:
    int maxDepth(string s) {
        int counter=0;
        int maxc=0;
        for(char ch:s){
            if(ch=='(')counter++;
            if(ch==')')counter--;

            maxc=max(maxc,counter);


        }

        return maxc;
    }
};