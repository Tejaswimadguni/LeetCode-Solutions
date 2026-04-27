class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
         vector<int> ans;
         vector<vector<int>>matrix(n,vector<int>(n));
        int count=0;
        int row=matrix.size();
        int col=matrix[0].size();
        int total=row*col;
        int srow=0;
        int scol=0;
        int ecol=col-1;
        int erow=row-1;
      int sqr=n*n;
      for(int i=1;i<=sqr;i++){
        ans.push_back(i);
      }
      int i=0;

         
        while(count<total){

            for(int indx=scol; count < total && indx<=ecol;indx++){
                matrix[srow][indx]=ans[i++];
                count++;
            }
            srow++;
            for(int indx=srow; count < total && indx<=erow;indx++){
             matrix[indx][ecol]=ans[i++];
                count++;
            }
            ecol--;
            for(int indx=ecol; count < total && indx>=scol;indx--){
               matrix[erow][indx]=ans[i++];
                count++;
            }
            erow--;
            for(int indx=erow; count < total && indx>=srow;indx--){
                matrix[indx][scol]=ans[i++];
                count++;
            }
            scol++;
            
        }
        return matrix;
    }
};