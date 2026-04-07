class Solution {
public:
    string removeDuplicates(string s) {
        string ans = "";
        stack<char> st;

    for(char c : s){

        if(!st.empty() && st.top() == c){
            st.pop();
        }
        else{
            st.push(c);
        }
    }
    while(!st.empty()){
        ans.push_back(st.top());
        st.pop();
    }

    reverse(ans.begin(), ans.end());

    return ans;
    }
};