class Solution {
public:
    int countSpecialIntegers(vector<int>& nums) {
        unordered_map<int,vector<int>>indx;
        for(int i=0;i<nums.size();i++){
            indx[nums[i]].push_back(i);
        }
        int ans=0;
        for(auto& [i,vec]:indx){
            if(vec.size()!=3)continue;

            int i1=vec[0];
            int i2=vec[1];
            int i3=vec[2];

            if(i2-i1==i3-i2)ans++;
        }
        return ans;
    }
};