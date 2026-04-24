class Solution {
public:
    int furthestDistanceFromOrigin(string moves) {
           int n=moves.length();
        int l=0,r=0;
        for(int i=0;i<n;i++){
          if(moves[i]=='_')continue;
          if(moves[i]=='L')l++;
          else if(moves[i]=='R')r++;
        }
        int count=0;
        count=max(l,r);
        int ans=0;
        for(char ch:moves){
          if(ch=='L')ans--;
          else if(ch=='R')ans++;
          else if(ch=='_'){
            if(count==l){
              ans--;
            }else{ans++;}
          }
        }
        return abs(ans);
    }
};