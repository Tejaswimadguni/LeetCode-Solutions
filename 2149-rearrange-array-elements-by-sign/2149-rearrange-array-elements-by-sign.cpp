class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int>plus;
        vector<int>minus;

        for(int i:nums){
            if(i>0)plus.push_back(i);
            else{minus.push_back(i);}
        }
       vector<int>ans(nums.size(),0);
       for (int i = 0; i < plus.size(); i++) {
            ans[2 * i] = plus[i];
            ans[2 * i + 1] = minus[i];
        }
        return ans;
    }
};