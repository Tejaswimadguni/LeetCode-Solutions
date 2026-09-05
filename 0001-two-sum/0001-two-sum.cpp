class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int,int>st;
        for(int i=0;i<nums.size();i++){
            st[nums[i]]=i;
        }

        for(int i=0;i<nums.size();i++){
            int  num=nums[i];
            int rem=target-num;
            if(st.count(rem) && st[rem]!=i){

                int indx1=i;
                int indx2=st[rem];
                return {min(indx1,indx2),max(indx1,indx2)};
            }
        }

        return {};
    }
};