class Solution {
public:
    int maximumCount(vector<int>& nums) {
        int s=0;
        int e=nums.size()-1;
        int ind=e+1;
        while(s<=e){
            int mid=s+((e-s)/2);
            if(nums[mid]>=0){
                ind=mid;
                e=mid-1;
            }else{
                s=mid+1;
            }
        }
        s=0;
        e=nums.size()-1;
        int inx=e+1;
         while(s<=e){
            int mid=s+((e-s)/2);
            if(nums[mid]>0){
                inx=mid;
                e=mid-1;
            }else{
                s=mid+1;
            }
        }
        int n=nums.size();

        return max(ind,n-inx);
    }
};