class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
       int n=nums.size();
        vector<int>ans;
        set<int>st(nums.begin(),nums.end());
        while(n>0){
            
            for(int x:st){
                ans.push_back(x);
                nums.erase(find(nums.begin(),nums.end(),x));
                
            }
            st=set<int>(nums.begin(),nums.end());
            n=nums.size();
        }

        return ans;
        
        
    }
};