class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        vector<int> ans;

    int n = nums1.size();
    int m = nums2.size();

    int i = 0, j = 0;

    while(i < n) {

        int s = nums1[i];

        while(j < m) {

            if(s == nums2[j]) {

                bool found = false;

                for(int x = j + 1; x < m; x++) {

                    if(nums2[x] > nums2[j]) {
                        ans.push_back(nums2[x]);
                        found = true;
                        break;
                    }
                }

                if(!found) {
                    ans.push_back(-1);
                }

                i++;
                j = 0;
                break;
            }

            j++;
        }
    }

    return ans;
        
    }
};