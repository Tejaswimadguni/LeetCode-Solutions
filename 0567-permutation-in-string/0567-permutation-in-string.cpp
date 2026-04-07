class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        if(s1.length()>s2.length())return false;
        vector<int> f1(26,0),f2(26,0);
        for(char c : s1)
            f1[c-'a']++;

        int sw=s1.length();
        for(int i=0;i<sw;i++){
            f2[s2[i]-'a']++;
        }
        if(f1==f2)return true;

        for(int i=sw;i<s2.length();i++){
            f2[s2[i]-'a']++;
            f2[s2[i-sw]-'a']--;
            if(f1==f2)return true;
        }
        return false;
    }
};