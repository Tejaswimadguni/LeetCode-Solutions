class Solution {
public:
    int evalRPN(vector<string>& tokens) {
            stack<int> st;
    for(int i=0;i<tokens.size();i++){
        string s=tokens[i];
        if(s=="+"||s=="-"||s=="*"||s=="/"){
            int val2=st.top();
            st.pop();
            int val1=st.top();
            st.pop();
             if(s == "+") st.push(val1 + val2);
            else if(s == "-") st.push(val1 - val2);
            else if(s == "*") st.push(val1 * val2);
            else st.push(val1 / val2);

        }else{
            st.push(stoi(s));
        }

    }
return st.top();
    }
};