class Solution {
private:  int sums(int n) {
    int sum = 0;

    while (n > 0) {
        sum += n % 10;
        n /= 10;
    }

    return sum;
}
public:
    int minElement(vector<int>& nums) {
        int ans=INT_MAX;
        for(int i=0;i<nums.size();i++){
            int sm=sums(nums[i]);
            nums[i]=sm;
            ans=min(ans,nums[i]);
        }
        return ans;
    }
};