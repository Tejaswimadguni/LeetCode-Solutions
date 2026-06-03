class Solution {
public:
    string bestHand(vector<int>& ranks, vector<char>& suits) {
         bool flush = true;
        for (int i = 1; i < 5; i++) {
            if (suits[i] != suits[0]) {
                flush = false;
                break;
            }
        }
        if (flush) return "Flush";
        unordered_map<int, int> mp;
        for (int rank : ranks) {
            mp[rank]++;
        }
        int maxi = 0;
        for (auto &p : mp) {
            maxi = max(maxi, p.second);
        }
        if (maxi >= 3) return "Three of a Kind";
        if (maxi >= 2) return "Pair";
        return "High Card";
    }
};