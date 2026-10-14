class Solution {

private:
vector<int> great(vector<int> &arr, int n){

    stack<int>st;
    vector<int>ans(n);
    st.push(-1);

    for(int i=n-1;i>=0;i--){
        int curr=arr[i];
        while(st.top() != -1 && st.top() <= curr)st.pop();
        ans[i]=st.top();
        st.push(arr[i]);

    }
    return ans;
} 

public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        int n=nums.size();
        vector<int>grt=great(nums,n);
        for(int i=0;i<n;i++){
            if(grt[i]==-1){
                for(int j=(i+1)%n;j!=i;j=(j+1)%n){
                    if(nums[j]>nums[i]){
                        grt[i]=nums[j];
                        break;
                    }
                }
            }
        }

        return grt;

        

    }
};