class Solution {
public:
    int maxChunksToSorted(vector<int>& arr) {
        stack<int>st;
        int i=0;
        while(i<arr.size()){
            if(st.empty() || arr[i]>=st.top()){
                st.push(arr[i]);
                i++;
                continue;
            }
            else{
                int num=st.top();
                while(!st.empty() && st.top()>arr[i]){
                    st.pop();
                }
                st.push(num);
                
            }
            i++;
            
        }
        return st.size();
    }
};