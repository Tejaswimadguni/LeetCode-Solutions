class Solution {
public:
    int strStr(string haystack, string needle) {
        int m=needle.length();
        int n=haystack.length();
        int s=0;
        for(int i=0;i<n;i++){
         s=0;
         int r=0;
         for(int j=i;j<i+m;j++){
            if(haystack[j]==needle[r]){
               s++;
               r++;
            }else{break;}
            
         }
         if(s==m){
            return i;
         }
        }
        return -1;
    }
};