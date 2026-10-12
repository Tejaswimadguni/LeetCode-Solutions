class Solution {
private:
    vector<int> nextsmall(vector<int>& arr, int n) {

        stack<int> st;
        vector<int> ans(n);
        st.push(-1);

        for (int i = n - 1; i >= 0; i--) {
            int curr = arr[i];
            while (st.top() != -1 && arr[st.top()] >= curr)
                st.pop();
            ans[i] = st.top();
            st.push(i);
        }
        return ans;
    }
    vector<int> prevsmall(vector<int>& arr, int n) {

        stack<int> st;
        vector<int> ans(n);
        st.push(-1);

        for (int i = 0; i < n; i++) {
            int curr = arr[i];
            while (st.top() != -1 && arr[st.top()] >= curr)
                st.pop();
            ans[i] = st.top();
            st.push(i);
        }
        return ans;
    }
    int Area(vector<int>& heights) {
        int n = heights.size();
        vector<int> next(n);
        next = nextsmall(heights, n);
        vector<int> prev(n);
        prev = prevsmall(heights, n);
        int ans = 0;
        for (int i = 0; i < n; i++) {
            int l = heights[i];
            if (next[i] == -1)
                next[i] = n;
            int b = next[i] - prev[i] - 1;

            int newa = l * b;
            ans = max(newa, ans);
        }

        return ans;
    }

public:
    int maximalRectangle(vector<vector<char>>& s) {
        vector<vector<int>> temp(s.size());

        for (int i = 0; i < s.size(); i++) {
            for (int j = 0; j < s[i].size(); j++) {
                temp[i].push_back(s[i][j] - '0');
            }
        }
        stack<int> st;
        int ans = Area(temp[0]);
        int n=temp.size();
        for (int i = 1; i < n; i++) {
            for (int j = 0; j < temp[0].size(); j++) {
                if (temp[i][j] != 0)
                    temp[i][j] += temp[i - 1][j];
                else {
                    temp[i][j] = 0;
                }
            }

            ans = max(ans, Area(temp[i]));
        }
        return ans;
    }
};