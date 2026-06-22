class Solution {
public:
    int maxNumberOfBalloons(string text) {
        unordered_map<char,int>cnt;
        for(char ch:text){
            cnt[ch]++;
        
        }
        int ans = min(min(cnt['b'], cnt['a']),
              min(cnt['l']/2, min(cnt['o']/2, cnt['n'])));

        return ans;
    }
};