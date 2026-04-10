class Solution {
public:
    int minimumDistance(vector<int>& nums) {
              unordered_map<int,vector<int>>index;

        for(int i=0;i<nums .size();i++){
            index[nums[i]].push_back(i);
        }
        int ans=INT_MAX;
        for(auto &p:index){
            vector<int> &ind=p.second;
            if(ind.size()>=3){
                if(ind.size() >= 3){
                for(int i = 0; i + 2 < ind.size(); i++){
                    int dist = 2 * (ind[i+2] - ind[i]);
                    ans = min(ans, dist);
                }
            }
            }
        }
        if(ans==INT_MAX)return -1;
        return ans;
    }
};