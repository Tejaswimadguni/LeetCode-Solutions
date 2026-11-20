class Solution {
public:
    int countConsistent(vector<int>& nums) {
        int ans=nums.size();
        
        for(int i=0;i<nums.size();i++){
            int andd=nums[i];
            int minn=nums[i];
            for(int j=i+1;j<nums.size();j++){
                 minn=min(minn,nums[j]);
                 andd=andd & nums[j];
                 if(andd==minn){
                    ans++;
                 }
            }
        }
        return ans;
    }
};