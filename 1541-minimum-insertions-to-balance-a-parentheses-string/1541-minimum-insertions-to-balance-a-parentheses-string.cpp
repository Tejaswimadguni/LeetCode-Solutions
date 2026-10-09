class Solution {
public:
    int minInsertions(string s) {
      stack<int>st;
      int ans=0,cnt=0;
      for(char ch:s){
        if(ch=='('){
            if(cnt%2!=0){
                ans++;
                cnt--;
            }
            cnt+=2;
        }
        if(ch==')'){
            cnt--;
            if(cnt<0){
                ans++;
                cnt=1;
            }

        }
      }

      ans+=cnt;

      return ans;

    }
};