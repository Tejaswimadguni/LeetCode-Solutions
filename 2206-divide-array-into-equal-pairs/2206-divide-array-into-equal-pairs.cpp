class Solution {
public:
    bool divideArray(vector<int>& nums) {
       int n=nums.size();
       if(n%2!=0)return false;
       unordered_map<int,int>frq;
       for(int i:nums){
        frq[i]++;
       }

        for(auto &x:frq){
            if(x.second%2!=0){
                return false;
            }
        }
    return true;
    }
};