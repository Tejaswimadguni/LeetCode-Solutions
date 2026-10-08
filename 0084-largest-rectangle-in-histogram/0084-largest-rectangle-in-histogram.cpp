class Solution {

private:
vector<int> nextsmall(vector<int> &arr, int n)
{

    stack<int>st;
    vector<int>ans(n);
    st.push(-1);

    for(int i=n-1;i>=0;i--){
        int curr=arr[i];
        while(st.top() != -1 && arr[st.top()] >= curr)st.pop();
        ans[i]=st.top();
        st.push(i);

    }
    return ans;
} 
vector<int> prevsmall(vector<int> &arr, int n)
{

    stack<int>st;
    vector<int>ans(n);
    st.push(-1);

    for(int i=0;i<n;i++){
        int curr=arr[i];
        while(st.top() != -1 && arr[st.top()] >= curr)st.pop();
        ans[i]=st.top();
        st.push(i);

    }
    return ans;
}   
public:
    int largestRectangleArea(vector<int>& heights) {
        int n=heights.size();
        vector<int>next(n);
        next=nextsmall(heights,n);
        vector<int>prev(n);
        prev=prevsmall(heights,n);
        int ans=0;
        for(int i=0;i<n;i++){
            int l=heights[i];
            if(next[i]==-1)next[i]=n;
            int b=next[i]-prev[i]-1;

            int newa=l*b;
            ans=max(newa,ans);
        }

        return ans;
    }
};