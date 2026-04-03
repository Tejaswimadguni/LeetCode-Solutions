class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int i=0,j=0,k=0;
    int n=nums.size();

    while(i<n){
        if(i!=j && (nums[i] ^ nums[j])==0){
            k++;
        }

        j++;

        if(j==n){
            if(k==0){
                return nums[i];
            }
            i++;
            j=0;
            k=0;
        }
    }

    return -1;
    }
};