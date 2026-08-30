class Solution {
public:
    int minimumDeletions(vector<int>& nums) {
        int n=nums.size();
        if(n==1)return 1;
        int maxx=*max_element(nums.begin(),nums.end());
        int minn=*min_element(nums.begin(),nums.end());
        int i=0,j=0;
        while(nums[i++]!=maxx){
            continue;
        }
        while(nums[j++]!=minn){
            continue;
        }
        i--;
        j--;
        int left=min(i,j);
        int right=max(i,j);
        int s1=right+1;
        int s2=n-left;
        int s3=(left+1)+(n-right);
        return min(s1,min(s2,s3));


    }
};