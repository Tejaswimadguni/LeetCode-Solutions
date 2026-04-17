class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
          int row=matrix .size();
        int col=matrix[0] .size();
       int ri=0;
       int coli=col-1;
       while(ri<row && coli>=0){
        if(matrix[ri][coli]==target)return 1;
        else if(matrix[ri][coli]<target)ri++;
        else{coli--;}
       }
       return 0;
    }
};