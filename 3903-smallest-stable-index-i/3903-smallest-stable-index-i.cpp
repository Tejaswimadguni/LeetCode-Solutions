class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
          int ans=0;
        int i=0;
        int maxx=nums[0];
       if(nums.size()==1)return 0;
        while(i<nums .size()){
            maxx=max(maxx,nums[i]);
            int j=i;
             int minn=INT_MAX;
            while(j<nums .size()){
                minn=min(minn,nums[j]);
                j++;
            }
            ans=maxx-minn;
            if(ans<=k)return i;
            i++;
         
        }

        return -1;
    }
};