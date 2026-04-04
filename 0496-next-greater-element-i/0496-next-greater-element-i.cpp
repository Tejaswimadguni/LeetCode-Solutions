class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
         unordered_map<int,int> mp;
        int m = nums2.size();
        for(int i = 0; i < m; i++){

            int next = -1;

            for(int j = i + 1; j < m; j++){
                if(nums2[j] > nums2[i]){
                    next = nums2[j];
                    break;
                }
            }

            mp[nums2[i]] = next;
        }
        vector<int> ans;

        for(int x : nums1){
            ans.push_back(mp[x]);
        }

        return ans;
    }
};