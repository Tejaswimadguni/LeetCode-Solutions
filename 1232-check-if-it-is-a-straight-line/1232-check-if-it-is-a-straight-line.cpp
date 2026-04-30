class Solution {
public:
    bool checkStraightLine(vector<vector<int>>& nums) {
        int row= nums .size();


        if(row==2)return true;

    int x1 = nums[0][0], y1 = nums[0][1];
    int x2 = nums[1][0], y2 = nums[1][1];

    for (int i = 2; i < row; i++) {
        int x = nums[i][0];
        int y = nums[i][1];

        if ((y - y1) * (x2 - x1) != (y2 - y1) * (x - x1)) {
            return false;
        }
    }

    return true;
    }
};