class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums) {
        vector<string> ans;
        int n=nums.size();
        int i=0;
        while(i<n){
            int m=0;
            for(int j=i;j<n-1;j++){
                if(nums[j]+1==nums[j+1]){
                    m++;
                    
                }else{break;}
            }
            if(i!=i+m){
                ans.push_back(to_string(nums[i])+"->"+to_string(nums[i+m]));
            }else{ans.push_back(to_string(nums[i]));}
            i=i+m+1;
        }
        return ans;
    }
};