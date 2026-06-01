class Solution {
public:
    bool isPerfectSquare(int num) {
         long long st = 1, end = num;

        while (st <= end) {
            long long mid = st + (end - st) / 2;
            long long sq = mid * mid;
            if (sq == num) return true;
            else if(sq < num)
                st = mid + 1;
            else
                end = mid - 1;
        }
        return false;
    }
};