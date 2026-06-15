    class Solution {
    public:
        int takeCharacters(string s, int k) {
            int n=s.size();
            unordered_map<char,int>frq;
            for(char ch:s){
                frq[ch]++;
            }
            if(frq['a']<k || frq['b']<k || frq['c']<k) return -1;

            int limitA = frq['a'] - k;
            int limitB = frq['b'] - k;
            int limitC = frq['c'] - k;

            int l = 0;
            int maxLen = 0;
            unordered_map<char, int> window;
            for (int r = 0; r < n; r++) {
                window[s[r]]++;

                while (window['a'] > limitA || window['b'] > limitB ||window['c'] > limitC) {
                    window[s[l]]--;
                    l++;
                }
                maxLen = max(maxLen, r - l + 1);
            }

            return n-maxLen;
        }
    };