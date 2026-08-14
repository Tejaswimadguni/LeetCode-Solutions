class Solution {
public:
    int maximumLengthSubstring(string s) {
        map<int,int>frq;
        int cnt=INT_MIN;
        for(int i=0;i<s.size();i++){
            int len=0;
            for(int j=i;j<s.size();j++){
                frq[s[j]]++;
                if(frq[s[j]]>2){
                    break;
                }
                len++;
            }
            cnt=max(cnt,len);
            for(auto&k:frq){
                k.second=0;
            }
        }

        return cnt;
    }
};