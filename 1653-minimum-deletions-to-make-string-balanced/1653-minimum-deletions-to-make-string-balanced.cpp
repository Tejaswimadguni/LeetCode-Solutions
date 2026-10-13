class Solution {
public:
    int minimumDeletions(string s) {
        stack<char>st;
        int ans=0;
        for(char ch:s){
            if(ch=='a' && !st.empty() && st.top()=='b'){
                ans++;
                st.pop();
                continue;
            }
            st.push(ch);
        }
        return ans;
    }
};