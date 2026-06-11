class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {

    int row=board.size();
    int col=board[0].size();
    vector<unordered_set<char>> rows(9);
    vector<unordered_set<char>> cols(9);
    vector<unordered_set<char>> boxes(9);  
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            char num=board[i][j];
            int box = (i / 3) * 3 + (j / 3);
            if(num=='.')continue;

            if(rows[i].count(num) || cols[j].count(num) || boxes[box].count(num))return false;

            rows[i].insert(num);
            cols[j].insert(num);
            boxes[box].insert(num);

        }
    }

    return true;
    }
};