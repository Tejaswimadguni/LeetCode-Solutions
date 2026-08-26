class Solution {
public:
    string shortestBeautifulSubstring(string s, int k) {
        int n=s.size();
        int left=0;
        int ones=0;
        string ans="";
        for(int i=0;i<n;i++){
            if(s[i]=='1')ones++;
            if(ones==k){
                while(s[left]=='0')left++;
                string cur = s.substr(left, i - left + 1);

                if(ans == ""  || cur.length()<ans.length() ||  (cur.length() == ans.length() && cur < ans)){
                    ans=cur;
                }

                ones--;
                left++;
            }


        }
        return ans;
    }
};