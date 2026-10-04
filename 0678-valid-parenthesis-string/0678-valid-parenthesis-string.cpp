class Solution {

private:
vector<vector<int>>dp;
bool solve(string s,int i,int balance){
    if(balance<0)return false;
    if(i==s.size())return balance==0;
    if(dp[i][balance]!=-1)return dp[i][balance];
    if(s[i]=='(') return dp[i][balance]=solve(s,i+1,balance+1);
    if(s[i]==')')return dp[i][balance]=solve(s,i+1,balance-1);

    if(s[i]=='*'){
        return dp[i][balance]=solve(s,i+1,balance+1) || solve(s,i+1,balance-1) || solve(s,i+1,balance);
    }
    return false;
}
public:
    bool checkValidString(string s) {
        int n=s.size();
        dp.assign(n,vector<int>(n+1,-1));
       return solve(s,0,0); 
    }
};