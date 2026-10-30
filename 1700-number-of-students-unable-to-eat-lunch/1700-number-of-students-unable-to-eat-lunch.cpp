class Solution {
public:
    int countStudents(vector<int>& students, vector<int>& sandwiches) {
        stack<int> st;
        queue<int> q;
        int n=students.size();
        for (int i = 0; i < students.size();) {
            st.push(sandwiches[n-i-1]);
            q.push(students[i]);
            i++;
        }
        int prev = 0;
        while (!st.empty() && !q.empty()) {

            if (q.front() == st.top()) {
                st.pop();
                q.pop();
                prev = 0;
            } else {
                int num = q.front();
                q.push(num);
                q.pop();
                prev++;
                if (prev == q.size()) {
                    break;
                }
            }
        }

        return q.size();
    }
};