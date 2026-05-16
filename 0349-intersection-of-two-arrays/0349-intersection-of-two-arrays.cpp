class Solution {
    vector<int> removeDuplicates(vector<int>& nums) {

    unordered_set<int> seen;
    vector<int> ans;

    for(int x : nums) {

        if(seen.find(x) == seen.end()) {
            seen.insert(x);
            ans.push_back(x);
        }
    }
  return ans;
   
}
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
    vector<int> ans;

    for(int i = 0; i < nums1.size(); i++) {

        for(int j = 0; j < nums2.size(); j++) {

            if(nums1[i] == nums2[j]) {
                ans.push_back(nums1[i]);
            }
        }
    }

    ans = removeDuplicates(ans);

 
            return ans;
    }
};