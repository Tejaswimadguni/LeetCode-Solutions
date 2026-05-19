class Solution {
public:
    int getCommon(vector<int>& nums1, vector<int>& nums2) {
         unordered_set<int> s(nums1.begin(), nums1.end());
    unordered_set<int> ans;

    for(int x : nums2) {

        if(s.find(x) != s.end()) {
            ans.insert(x);
        }
    }

    vector<int>sol=vector<int>(ans.begin(),ans.end());
    sort(sol.begin(),sol.end());
    if(sol.size()<1)return -1;
    return sol[0];
    }
};