class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
            int col=mat[0] .size();
    int row=mat .size();
    int sum=0;
     int r=0,c=col-1;

     if((col)%2!=0){
        for(int i=0;i<row;i++){
            sum+=mat[i][i];
        }
        while(r<row && c>=0){
                sum+=mat[r][c];
                r++;
                c--;
        }
        sum=sum-mat[row/2][col/2];
     }else{
        for(int i=0;i<row;i++){
            sum+=mat[i][i];
        }
        while(r<row && c>=0){
                sum+=mat[r][c];
                r++;
                c--;
        }
     }
     return sum;
    }
};