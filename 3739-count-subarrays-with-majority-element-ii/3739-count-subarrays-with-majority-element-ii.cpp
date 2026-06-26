class Solution {
public:
    class BIT {
    public:
        vector<long long> tree;
        int size;
        BIT(int n) {
            size = n;
            tree.assign(n + 1, 0);
        }
        void add(int index) {
            while (index <= size) {
                tree[index]++;
                index += index & (-index);
            }
        }
        long long getCount(int index) {
            long long cnt = 0;
            while (index > 0) {
                cnt += tree[index];
                index -= index & (-index);
            }
            return cnt;
        }
    };

    long long countMajoritySubarrays(vector<int>& nums, int target) {

        int n = nums.size();
        vector<int> prefix(n + 1, 0);

        for (int i = 0; i < n; i++) {
            if (nums[i] == target)
                prefix[i + 1] = prefix[i] + 1;
            else
                prefix[i + 1] = prefix[i] - 1;
        }
        vector<int> compressed = prefix;
        sort(compressed.begin(), compressed.end());
        compressed.erase(unique(compressed.begin(), compressed.end()), compressed.end());
        BIT bit(compressed.size());
        long long answer = 0;

        for (int value : prefix) {

            int position = lower_bound(compressed.begin(),
                                       compressed.end(),
                                       value) - compressed.begin() + 1;

            answer += bit.getCount(position - 1);
            bit.add(position);
        }

        return answer;
    }
};