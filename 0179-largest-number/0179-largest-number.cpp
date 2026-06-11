class Solution {
    private :
     static bool cmp(string a, string b) {
        return a + b > b + a;
    }
public:
   
    string largestNumber(vector<int>& nums) {
        vector<string>str;
          int cnt=0;
          
        for(int i:nums){
            if(i==0)cnt++;
            str.push_back(to_string(i));
        }
        if(cnt==nums.size())return "0";
        sort(str.begin(),str.end(),cmp);
        string ans;
      
        
       
        for(string i:str){
            ans+=i;
        }

        return ans;
    }
};