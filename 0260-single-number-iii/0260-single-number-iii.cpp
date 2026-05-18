class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        unordered_map<int,int>ans;
        vector<int>anss;
        for(int i:nums){
            ans[i]++;
        }
    for(auto &i:ans){
        if(i.second<2)anss.push_back(i.first);
    }
    return anss;
    }
};