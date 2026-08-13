class Solution {
public:
    bool isIsomorphic(string s, string t) {
        int n=s.size();
        int m=t.size();
        if(n!=m)return false;
        map<char,int>fs;
        map<char,int>ft;
       for(int i=0;i<n;i++){
        if(fs.count(s[i]) && fs[s[i]]!=t[i])return false;
        if(ft.count(t[i]) && ft[t[i]]!=s[i])return false;
        fs[s[i]]=t[i];
        ft[t[i]]=s[i];
       }

       return true;
    }
};