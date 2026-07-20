class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
         vector<int> ans;
        int count=0;
        int row=matrix.size();
        int col=matrix[0].size();
        int total=row*col;
        int srow=0;
        int scol=0;
        int ecol=col-1;
        int erow=row-1;
         
       while(count<total){
        for(int indx=scol;count<total && indx<=ecol;indx++){
            ans.push_back(matrix[srow][indx]);
            count++;
        }
        srow++;
        for(int indx=srow;count<total && indx<=erow;indx++){
            ans.push_back(matrix[indx][ecol]);
            count++;
        }
        ecol--;
        for(int indx=ecol;count<total && indx>=scol;indx--){
            ans.push_back(matrix[erow][indx]);
            count++;
        }
        erow--;
        for( int indx=erow; count<total && indx>=srow;indx--){
            ans.push_back(matrix[indx][scol]);
            count++;
        }
        scol++;
       }

       return ans;
    }
};