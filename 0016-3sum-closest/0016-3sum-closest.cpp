class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        int n=nums.size();
        sort(nums.begin(),nums.end());
        int closest=nums[0]+nums[1]+nums[2];
        for(int f=0;f<n;f++){
            int i=f+1;
            int j=n-1;
            while(i<j){
                int sum=nums[f]+nums[j]+nums[i];
                if(abs(sum-target)<abs(closest-target)){
                    closest=sum;
                }
                if(sum==target)return target;
                if(sum<target)i++;
                else{j--;}

            }
        }

        return closest;
    }
};