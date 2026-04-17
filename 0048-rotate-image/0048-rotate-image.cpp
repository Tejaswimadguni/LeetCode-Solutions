class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
           int erow=matrix.size();
        int ecol=matrix[0].size();
        for(int i=0;i<erow-1;i++){
            for(int j=i+1;j<=ecol-1;j++){
                swap(matrix[i][j],matrix[j][i]);
            }
            
        }
        for(int i=0;i<erow;i++){
            int s=0,e=ecol-1;
            while(s<=e){
                swap(matrix[i][s],matrix[i][e]);
                s++;
                e--;
            }
        }
    }
};