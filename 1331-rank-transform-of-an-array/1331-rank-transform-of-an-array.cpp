class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {
         vector<int>dup;
         dup=arr;
         vector<int>ans;
         sort(dup.begin(),dup.end());
        unordered_map<int,int>rank;
        int j=1,i=0;
        for(int x:dup){
            if(!rank.count(x)){
                rank[x]=j++;
            }
        }

        for(int i=0;i<arr.size();i++){
            ans.push_back(rank[arr[i]]);
        }
        return ans;
    }
};