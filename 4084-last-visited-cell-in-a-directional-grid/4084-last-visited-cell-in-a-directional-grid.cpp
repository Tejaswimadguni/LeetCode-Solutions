class Solution {

private:
 bool valid(int x,int y,int row,int col){
    if(x<0 || y<0 || x>=row || y>=col)return false;

    return true;
 }   
 vector<int> move(string s,int x,int y){
    if(s=="R"){
        y++;
    }
    else if(s=="L"){
        y--;
    }else if(s=="U"){
        x--;
    }else{
        x++;
    }

    return {x,y};
 }
public:
    vector<int> lastVisitedCell(vector<vector<char>>& grid) {
       int x=0,y=0;
        int px=0,py=0;
        int row=grid.size();
        int col=grid[0].size();
        vector<vector<bool>>vist(row,vector<bool>(col,false));
        while(valid(x,y,row,col)){
            if(vist[x][y])break;
            vist[x][y]=true;
            px=x;
            py=y;
            
            string s(1,grid[x][y]);
            vector<int>co=move(s,x,y);
            x=co[0];
            y=co[1];
        }

        return {px,py};
    }
};