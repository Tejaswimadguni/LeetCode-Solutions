class Solution {
public:
    int largestInteger(vector<int>& nums, int k) {
        int n=nums.size();
        if(n==k){
            return *max_element(nums.begin(),nums.end());
        }
        map<int,int>frq;
        for(int i:nums){
            frq[i]++;
        }

        int ans=-1;
        for(auto &i:frq){
            if(i.second==1){
                ans=max(ans,i.first);
            }
        }
        if(k==1)return ans;
         int first = nums[0];
        int last = nums[n - 1];

        int cf = 0, cl = 0;

        for (int x : nums) {
            if (x == first)
                cf++;

            if (x == last)
                cl++;
        }

        if (cf == 1 && cl == 1)
            return max(first, last);

        if (cf == 1)
            return first;

        if (cl == 1)
            return last;
        return -1;
    }
};