class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int row=accounts.size();
        int col=accounts[0].size();
        int sum=0;
        for(int i=0;i<row;i++){
            int summ=0;
            for(int j=0;j<col;j++){
                summ+=accounts[i][j];
            }
            sum=max(sum,summ);
        }
        return sum;
    }
};