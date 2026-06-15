class Solution {
public:
    string largestEven(string s) {
        int i=s.size()-1;
        while(i>=0){
            if(s[i]=='2')break;
            i--;
        }
        string ans;
        int j=0;
        while(i>=0){
            ans+=s[j];
            j++;
            i--;
        }
        return ans;
    }
};