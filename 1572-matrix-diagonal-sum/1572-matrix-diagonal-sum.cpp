class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int row=mat.size();
        int col=mat[0].size();
        int sum=0;
        int i=0;
        while(i<row && i<col){
            sum+=mat[i][i];
            sum+=mat[i][row-i-1];
            i++;
        }

        if(col%2!=0){
            sum-=mat[row/2][col/2];
        }
        return sum;
    }
};