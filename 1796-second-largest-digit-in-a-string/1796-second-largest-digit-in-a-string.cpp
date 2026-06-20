class Solution {
public:
    int secondHighest(string s) {
       set<int>ans;
        for(char i:s){
            if(i>='0' && i<='9'){
                ans.insert(i-'0');
            }
        }

           if (ans.size() < 2)
            return -1;
        auto it=prev(ans.end(),2);
        return *it;
    }
};