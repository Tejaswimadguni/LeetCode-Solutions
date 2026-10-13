class Solution {
public:
    string reversePrefix(string s, char ch) {
        int i=0;
        stack<char>st;
        string half;

        while(i<s.size() && s[i]!=ch){
            st.push(s[i++]);
        }
        if(s.size()==st.size())return s;
        st.push(s[i]);
        i++;

        while(i<s.size()){
            half+=s[i];
            i++;
        }
        string ans;
        while(!st.empty()){
            ans+=st.top();
            st.pop();
        }
        ans+=half;

        return ans;
    }
};