class Solution {
public:
    long long smallestNumber(long long num) {
        vector<char>ans;
        long long n=num;
        string nu=to_string(abs(n));
        if(num==0)return 0;
        for(char ch:nu){
            ans.push_back(ch);
        }
        if(n<0){
            sort(ans.begin(),ans.end(),[](char a, char b){
                return a>b;
            });
        }else{
            sort(ans.begin(),ans.end());
             int j=0;
         while(j < ans.size() && ans[j] == '0') {
                j++;
        }
            if(j < ans.size()) {
            swap(ans[0], ans[j]);
        }
        }
       
        
        long long sol = 0;

        for(char ch :ans){
          sol = sol * 10 + (ch - '0');
        }
    
    if(num<0)return sol*-1;
    return sol;
    }
};