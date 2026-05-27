class Solution {
public:
    int numberOfSpecialChars(string word) {
        unordered_map<char,int>low;
        unordered_map<char,int>up;
        for(int i=0;i<word.size();i++){
            char ch=word[i];
            if(islower(ch)){
                low[ch]=i;
            }else{
                char lower=tolower(ch);

                if(up.find(lower)==up.end()){
                    up[lower]=i;
                }
            }
        }

        int cnt=0;
        for(auto ch:low){
            char cc=ch.first;
            if(up.count(cc) && low[cc]<up[cc]){
                cnt++;
            }
        }
        return cnt;
    }
};