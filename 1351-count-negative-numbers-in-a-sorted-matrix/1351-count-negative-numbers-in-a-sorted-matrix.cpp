class Solution {
public:
    int countNegatives(vector<vector<int>>& grid) {
         int count=0;
        int row=grid .size();
        int col=grid[0] .size();
        int r=0,c=0;
        while(r<row && c<col){
            int element=grid[r][c];
            if(element>=0){
                c++;
            }else if(element<0){
                count+=col-c;
                c=0;
                r++;
            }
            if(c>=col){
                c=0;
                r++;
            }
        }
        return count;
    }
};