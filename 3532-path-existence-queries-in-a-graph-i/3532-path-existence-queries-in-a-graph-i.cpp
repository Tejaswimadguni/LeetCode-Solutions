class Solution {
public:
    vector<bool> pathExistenceQueries(int n, vector<int>& nums, int maxDiff, vector<vector<int>>& queries) {
     vector<bool>ans;
     vector<int>compare(nums.size());
    int id=0;
    for(int i=1;i<nums.size();i++){
        if(nums[i]-nums[i-1]>maxDiff){
            id++;
        }

        compare[i]=id;
    }

     for(auto&q:queries){
        if(compare[q[0]]==compare[q[1]]){
            ans.push_back(true);
        }else{
            ans.push_back(false);
        }
     }   

     return ans;
    }
};