class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        int mx=*max_element(nums.begin(),nums.end());
        int mn=*min_element(nums.begin(),nums.end());
        sort(nums.begin(),nums.end());
        vector<int>ans;
        int i=mn;
        int k=0;
        while(i<=mx){
            if(nums[k]!=i){
                ans.push_back(i);
                i++;
            }else{
                k++;
                i++;
            }
        }
        if(ans.size()==0)return {};
        return ans;
    }
};