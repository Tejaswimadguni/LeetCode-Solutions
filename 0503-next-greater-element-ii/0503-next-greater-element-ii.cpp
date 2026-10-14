class Solution {

private:
vector<int> great(vector<int> &arr, int n){

    stack<int>st;
    vector<int>ans(n);
    

    for(int i=n-1;i>=0;i--){
        int curr=arr[i];
        while(!st.empty() && st.top() <= curr)st.pop();
        ans[i] = st.empty() ? -1 : st.top();
        st.push(arr[i]);

    }
    return ans;
} 

public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        int n=nums.size();
        for(int i=0;i<n;i++){
            nums.push_back(nums[i]);
        }

        vector<int>grt=great(nums,2*n);

        grt.resize(n);

        return grt;

        

    }
};