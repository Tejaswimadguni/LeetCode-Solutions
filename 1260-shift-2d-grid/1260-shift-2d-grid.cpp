class Solution {
public:
    vector<vector<int>> shiftGrid(vector<vector<int>>& grid, int k) {
        int m=grid.size();
        int n=grid[0].size();
        vector<vector<int>>ans(m,vector<int>(n,0));

        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                int indx=i*n+j;
                int newi=(indx+k)%(m*n);
                int newR=newi/n;
                int newC=newi%n;
                ans[newR][newC]=grid[i][j];
            }
        }
        return ans;
    }
};