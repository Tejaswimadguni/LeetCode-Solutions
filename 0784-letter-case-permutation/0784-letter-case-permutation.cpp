class Solution {

    private:
    void solve(string s,string output,int indx,vector<string>&ans){
        if(indx>=s.size()){
            ans.push_back(output);
            return;
        }
        if(s[indx]>='0' && s[indx]<='9'){
            output.push_back(s[indx]);
            solve(s,output,indx+1,ans);
        }else{
            output.push_back(tolower(s[indx]));
            solve(s,output,indx+1,ans);
            output.pop_back();
            output.push_back(toupper(s[indx]));
            solve(s,output,indx+1,ans);
            output.pop_back();
        }

    }
public:
    vector<string> letterCasePermutation(string s) {
        vector<string>ans;
        string output="";
        int indx=0;
        solve(s,output,indx,ans);
        return ans;
    }
};