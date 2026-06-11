class Solution {
    private :
     static bool cmp(string a, string b) {
        return a + b > b + a;
    }
public:
   
    string largestNumber(vector<int>& nums) {
        vector<string>str;
        for(int i:nums){
            str.push_back(to_string(i));
        }
        sort(str.begin(),str.end(),cmp);
         if(str[0]=="0")return "0";
        string ans;
      
        
       
        for(string i:str){
            ans+=i;
        }

        return ans;
    }
};