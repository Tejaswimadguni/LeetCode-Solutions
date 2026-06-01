class Solution {
public:
    bool isThree(int n) {
        if(n<3)return false;
         vector<int> factors;

    for (int i = 1; i * i <= n; i++) {
        if (n % i == 0) {
            factors.push_back(i);

            if (i != n / i)
                factors.push_back(n / i);
        }
    }
    if(factors.size()==3)return true;

    return false;
    }
};