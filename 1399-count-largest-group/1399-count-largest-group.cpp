class Solution {
    private:
    int ssum(int n) {
    int sum = 0;
    while (n > 0) {
        sum += n % 10;
        n /= 10;
    }
    return sum;
}
public:
    int countLargestGroup(int n) {
        unordered_map<int,int>digsum;
        for(int i=1;i<=n;i++){
           digsum[ssum(i)]++;
        }
        int maxx=INT_MIN;
        for(auto& i:digsum){
            maxx=max(maxx,i.second);
        }

        int cnt=0;
        for(auto& j:digsum){
            if(j.second==maxx){
                cnt++;
            }
        }

        return cnt;
    }
};