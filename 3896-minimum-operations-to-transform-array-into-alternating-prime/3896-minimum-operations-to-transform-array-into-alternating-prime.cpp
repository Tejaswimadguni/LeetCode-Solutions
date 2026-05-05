class Solution {
    private:
    bool isPrime(int n){
    if(n <= 1) return false;
    for(int i = 2; i * i <= n; i++){
        if(n % i == 0) return false;
    }
    return true;
}
public:
    int minOperations(vector<int>& nums) {
    int steps=0;
        int i=0;

       while(i<nums.size()){
           if(i%2==0){
               if(isPrime(nums[i])){
                   i++;
                   continue;
               }else{
                   nums[i]++;
                   steps++;
               }
           }else{
               if(!isPrime(nums[i])){
                   i++;
                   continue;
               }else{
                   nums[i]++;
                   steps++;
               }
           }
       } 
        return steps;
    }
};