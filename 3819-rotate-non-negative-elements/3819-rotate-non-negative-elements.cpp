class Solution {
public:
    vector<int> rotateElements(vector<int>& nums, int k) {
        vector<int>ans;
        for(int i=0;i<nums.size();i++){
            if(nums[i]>=0){
                ans.push_back(nums[i]);
            }
        }
        if(ans.size()==0)return nums;
        k%=ans.size();
        rotate(ans.begin(), ans.begin() + k, ans.end());
        int i=0;
        int j=0;
        while(i<nums.size() && j<ans.size()){
            if(nums[i]>=0){
                nums[i++]=ans[j++];
            }else{i++;}
        }

        return nums;
    }
};