class Solution {
public:
    int numberOfSpecialChars(string word) {
        unordered_set<char>up,low;
        for(int i=0;i<word.size();i++){
                char ch=word[i];
                if(islower(ch)){
                    low.insert(ch);
                }else{up.insert(ch);}
            
        }

        int cnt=0;
        for(char ch:low){
                if(up.count(toupper(ch))){
                    cnt++;
            }
        }

        return cnt;
    }
};