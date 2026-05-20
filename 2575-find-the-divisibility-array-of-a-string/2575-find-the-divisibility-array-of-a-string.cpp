class Solution {   
public:
    vector<int> divisibilityArray(string word, int m) {
        int n=word.size();
       
        vector<int>ans(n,0);
        long long  rem=0;
        for(int i=0;i<n;i++){
            int num=word[i]-'0';
            rem=(rem*10+num)%m;
            if(rem==0)ans[i]=1;
        }
       
        return ans;
    }
};