class Solution {
public:

     int findfirst(vector<int>& nums, int target){
    
      int s=0,e=nums.size()-1;
      int index=-1;
      while(s<=e){
       int mid=s+(e-s)/2;
        
        if(nums[mid]<target){
            s=mid+1;
        }
        else{e=mid-1;}
        if(nums[mid]==target){
             index=mid;
        }
      }  
      return index;
    }


    int findLast(vector<int>& nums, int target) {
        int index = -1;
        int s = 0, e = nums.size() - 1;
        while (s <= e) {
            int mid = s + (e - s) / 2;
            if (nums[mid] <= target) {
                s = mid + 1;
            } else {
                e = mid - 1;
            }
            if (nums[mid] == target) index = mid;
        }
        return index;
    }

    vector<int> searchRange(vector<int>& nums, int target) {
        int first = findfirst(nums, target);
        int last = findLast(nums, target);
        return {first, last};}
    
};

