class Solution {
public:
    int maxDistance(vector<int>& nums1, vector<int>& nums2) {
         int dist=INT_MIN;
        int i=0,j=0;
        int n1=nums1.size();
        int n2=nums2.size();

        while(i<n1 &&j<n2){
            if(i<=j && nums1[i] <= nums2[j]){
                dist=max(dist,j-i);
                j++;
            }else{i++;
            j++;}
           
        }
        if(dist==INT_MIN)return 0;
        return dist;
    }
};