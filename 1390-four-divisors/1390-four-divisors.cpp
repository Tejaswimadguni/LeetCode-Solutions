class Solution {
    private: int div(int n){
            int cnt = 1;
    for(int i = 2; i * i <= n; i++) {
       int power = 0;
        while(n % i == 0) {
            power++;
            n /= i;
        }
        cnt *= (power + 1);
    }
    if(n > 1) {
        cnt *= 2;
    }
    return cnt;
}
int sum(int n) {
    int sum = 0;
    for(int i = 1; i <= n; i++) {
        if(n % i == 0) {
            sum += i;
        }
    }

    return sum;
}

public:
    int sumFourDivisors(vector<int>& nums) {
        int ans=0;
        for(int i:nums){
            int cnt=div(i);
            if(cnt==4) ans+=sum(i); 
        }
        return ans;;
   }
};