class Solution {
public:
    int sortPermutation(vector<int>& nums) {
        vector<int>num=nums;
        vector<int>el;
        sort(num.begin(),num.end());
        for(int i=0;i<nums.size();i++){
            if(num[i]!=nums[i])el.push_back(nums[i]);
        }
        if(el.empty())return 0;
        int ans=el[0];

        for(int i=1;i<el.size();i++){
            ans= ans &= el[i]; 
        }

        return ans;
    }
};