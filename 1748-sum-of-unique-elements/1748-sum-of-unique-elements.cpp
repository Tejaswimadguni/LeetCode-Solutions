class Solution {
public:
    int sumOfUnique(vector<int>& nums) {
        int n=nums.size();
        int sum=0;
        unordered_map<int,int>freq;
        for(int i:nums){
            freq[i]++;
        }

        for(auto i:freq){
            if(i.second==1){
                sum+=i.first;
            }
        }
        return sum;
    }
};