class Solution {

  private:
   bool isPrime(int n) {
    if (n < 2) return false;
    for (int i = 2; 1LL * i * i <= n; i++) {
        if (n % i == 0)
            return false;
    }
    return true;
}  
public:
    int diagonalPrime(vector<vector<int>>& nums) {
         int row=nums.size();
         int col=nums[0].size();
        int ans=INT_MIN;

         for(int i=0;i<row;i++){
         if(isPrime(nums[i][i])){
        ans=max(ans,nums[i][i]);
        }}

        int stc=0;
        int str=row-1;
        while(stc<col && str>=0){
            if(isPrime(nums[stc][str])){
            ans=max(ans,nums[stc][str]);
            stc++;
            str--;
            }else{
            stc++;
            str--;
            }
        }


    if(ans<0)return 0;
    return ans;
    }
};