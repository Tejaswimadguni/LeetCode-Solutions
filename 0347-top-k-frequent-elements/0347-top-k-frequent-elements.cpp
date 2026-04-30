class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
int n=nums .size();
        vector<int> ans;
        vector<pair<int,int>> freqq;
        unordered_map<int,int>freq;
        for(int i:nums){
          freq[i]++;
        }
        for(auto &i:freq){
          freqq.push_back({i.second,i.first});
        }
       sort(freqq.begin(),freqq.end(),greater<>());

     for(int i = 0; i < k; i++){
    ans.push_back(freqq[i].second);
}

return ans;

    }
};