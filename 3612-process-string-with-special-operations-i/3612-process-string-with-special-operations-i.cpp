class Solution {
 private:
 string star(string s){
     if (s.empty()) return "";
    return s.substr(0, s.size() - 1);
 }   

 string has(string s){
    string ans=s;
    ans+=s;
    return ans;
 }

 string mod(string s){
    reverse(s.begin(),s.end());
    return s;
 }
public:
    string processStr(string s) {
        string ans="";
        for(int i=0;i<s.size();i++){
            if(s[i]>='a' && s[i]<='z'){
                ans+=(s[i]);
            }else if(s[i]=='#'){
                ans=has(ans);
            }else if(s[i]=='%'){
               ans = mod(ans);
            }else{
                ans=star(ans);
            }
        }

        return ans;
    }
};