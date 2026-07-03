class Solution {

    private:
    void solve(string digits,string output,int indx,string map[],vector<string>&ans){
        if(indx>=digits.size()){
            ans.push_back(output);
            return ;
        }
        int number=digits[indx]-'0';
        string val=map[number];

        for(int i=0;i<val.size();i++){
            output.push_back(val[i]);
            solve(digits,output,indx+1,map,ans);
            output.pop_back();
        }
    }
public:


    vector<string> letterCombinations(string digits) {
        vector<string>ans;
        if(digits.size()==0)return ans;
        string output="";
        string map[10]={"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
        int indx=0;
        solve(digits,output,indx,map,ans);

        return ans;
    }
};