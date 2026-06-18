class Solution {
public:
    string convertToTitle(int col) {
        string ans;
        if(col<=26)return string(1,col+'A'-1);
        while(col>0){
            col--;
             ans += char('A' + col % 26);
             col/=26;
        }
        reverse(ans.begin(), ans.end());

        return ans;
    }
};