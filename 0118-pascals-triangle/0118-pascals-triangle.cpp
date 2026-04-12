class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>>triangle;
        for(int i=0;i<numRows;i++){
            vector<int> row(i+1);
            for(int j=0;j<=i;j++){
                if(j==0||j==i){
                    row[j]=1;
                }else{
                row[j]=triangle[i-1][j-1]+triangle[i-1][j];}
            }
            triangle.push_back(row);
        }

        return triangle;
    }
};