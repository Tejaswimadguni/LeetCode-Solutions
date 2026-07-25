class Solution {
public:
    int maxProduct(int n) {
        vector<int>nums;

        while(n>0){
            int dig=n%10;

            nums.push_back(dig);
            n/=10;
        }
        sort(nums.begin(),nums.end());
        int s=nums.size();
        return nums[s-2]*nums[s-1];
    }
};