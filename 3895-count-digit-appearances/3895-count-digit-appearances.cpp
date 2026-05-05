class Solution {
    private:
    string itos(int nums){
        string s=to_string(nums);
        return s;
    }
public:
    int countDigitOccurrences(vector<int>& nums, int digit) {
        char ch='0'+digit;
    int count=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]<=9){
                if(nums[i]==digit)count++;
            }else{
                string s=itos(nums[i]);
                int len=s.size();

                for(int j=0;j<len;j++){
                    if(s[j]==ch)count++;
                }
            }
            
        }

        return count;
    }
};