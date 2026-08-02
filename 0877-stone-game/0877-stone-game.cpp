class Solution {
public:
    bool stoneGame(vector<int>& piles) {
        int n=piles.size();
        vector<vector<int>>dp(n,vector<int>(n,0));

        for(int i=0;i<n;i++){
            dp[i][i]=piles[i];
        }

        for(int i=2;i<=n;i++){
            for(int j=0;j+i-1<n;j++){
                int stones=j+i-1;
                int lft=piles[j]-dp[j+1][stones];
                int right=piles[stones]-dp[j][stones-1];

                dp[j][stones]=max(lft,right);

            }
        }
        return dp[0][n-1]>0;
    }
};