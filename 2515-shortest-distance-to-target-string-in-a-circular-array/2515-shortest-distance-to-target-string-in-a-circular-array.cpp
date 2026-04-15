class Solution {
public:
    int closestTarget(vector<string>& words, string target, int startIndex) {
         int n=words .size();
        int ans=INT_MAX;
        int fwd,bwd;
        fwd=bwd=INT_MAX;
        int dist=INT_MAX;

        for(int i=0;i<words.size();i++){
            if(words[i]==target){
                fwd=(i - startIndex + n) % n;
                bwd=(startIndex - i + n) % n;
                  dist=min(fwd,bwd);
                   ans=min(ans,dist);
            }
          
           
        }

        if(ans==INT_MAX)return -1;
        return ans;
    }
};