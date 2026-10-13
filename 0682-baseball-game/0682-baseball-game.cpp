class Solution {
public:
    int calPoints(vector<string>& operations) {
        stack<int> st;
        for (int i=0;i<operations.size();i++) {
            string s=operations[i];
            if ( s[0]=='-' || s[0]>= '0' && s[0] <= '9')
                st.push(stoi(s));
            else if (s == "+") {
                int num1 = st.top();
                st.pop();
                int num2 = st.top();
                st.pop();
                st.push(num2);
                st.push(num1);
                st.push(num1 + num2);
            } else if (s == "C") {
                st.pop();

            } else {
               st.push(2*st.top());
            }
        }
        int ans=0;
        while (!st.empty()) {
            ans+=st.top();
            st.pop();
        }

        return ans;
    }
};