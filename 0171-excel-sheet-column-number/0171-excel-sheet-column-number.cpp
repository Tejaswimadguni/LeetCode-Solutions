class Solution {
public:
    int titleToNumber(string columnTable) {
        if(columnTable.size()==1)return columnTable[0]-'A'+1;

         int ans = 0;

        for(char ch : columnTable) {
        ans = ans * 26 + (ch - 'A' + 1);
        }

        return ans;
    }
};