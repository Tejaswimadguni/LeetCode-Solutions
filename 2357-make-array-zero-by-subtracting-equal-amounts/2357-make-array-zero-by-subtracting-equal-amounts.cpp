class Solution {
public:
    int minimumOperations(vector<int>& nums) {
        int m=0;
    int n=nums.size();
    unordered_map<int,int>freq;
    for(int i:nums){
        freq[i]++;
    }

    for(auto i:freq){
        if(i.first!=0){
            m++;
        }
    }
    return m;
    }
};