class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int i = 0, j = 0;
        int s1 = nums1.size(), s2 = nums2.size();
        int total = s1 + s2;
        int prev = 0, curr = 0;
        int count = 0;
        while (i < s1 || j < s2) {
            prev = curr;
            if (i < s1 && (j >= s2 || nums1[i] <= nums2[j])) {
                curr = nums1[i];
                i++;
            } else {
                curr = nums2[j];
                j++;
            }
            if (count == total / 2)
                break;

            count++;
        }
        if (total % 2 != 0)
            return curr;
        return (prev + curr) / 2.0;
    }
};