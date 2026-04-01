class Solution {
public:
    int strStr(string haystack, string needle) {
        int m=needle.length();
        int n=haystack.length();
        for(int i=0;i<n-m;i++){
            int j=0;
            while(j<m && haystack[i+j]==needle[j]){
                j++;
            }
            if(m==j){
                return i;
            }
        }
        return -1;
    }
};