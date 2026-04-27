class Solution {
public:
    int lengthOfLastWord(string s) {
                int n=s.size();
        int count=0;
        int index=0;
        for(int i=0;i<n;i++){
          if(s[i]==' ' && isalpha(s[i+1])){
            index=i;
          }
        }
       for(int i=index;i<n;i++){
        if(isalpha(s[i])){
          count++;
        }
       }
        return count;
    }
};