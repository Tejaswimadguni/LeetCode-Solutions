class Solution {
public:
    vector<int> sequentialDigits(int low, int high) {
        string num = "123456789";
        int ls = to_string(low).size();
        int hs = to_string(high).size();

        set<int> nums;

        for (int len = ls; len <= hs; len++) {
            for (int i = 0; i + len <= num.size(); i++) {
                nums.insert(stoi(num.substr(i, len)));
            }
        }

        vector<int> ans;
        for (int x : nums) {
            if (x >= low && x <= high)
                ans.push_back(x);
        }

        return ans;
    }
};