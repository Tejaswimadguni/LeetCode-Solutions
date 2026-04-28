class Solution {
public:
    bool search(vector<int>& nums, int target) {
        int pivot=0;
      int n=nums .size();
      for(int i=0;i<n-1;i++){
        if(nums[i+1]<nums[i]){
          pivot=i+1;
          break;
        }else{continue;}
      }  

      if(nums[pivot]<=target && target<=nums[n-1]){
        int s=pivot;
        int e=n-1;
        while(s<=e){
          int mid=s+(e-s)/2;
          if(nums[mid]==target)return true;
          else if(nums[mid]>target)e=mid-1;
          else{s=mid+1;}

        }

      }else{
        int st=0;
        int end=pivot-1;
        while(st<=end){
          int mid=st+(end-st)/2;
          if(nums[mid]==target)return true;
          else if(nums[mid]>target)end=mid-1;
          else{st=mid+1;}

        }
      }
      return false;
    }
};