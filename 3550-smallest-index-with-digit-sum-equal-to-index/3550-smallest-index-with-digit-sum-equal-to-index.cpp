class Solution {
private:
int sum(int n){
    int ans=0;
    while(n>0){
        ans+=n%10;
        n/=10;
    }
    return ans;
}

public:
    int smallestIndex(vector<int>& nums) {
        for(int i=0;i<nums.size();i++){
            int ind=sum(nums[i]);
            if(ind==i)return i;
        }

        return -1;
    }
};