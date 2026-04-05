class Solution {
public:
    vector<string> findWords(vector<string>& words) {

        vector<string> ans;
      string fr="qwertyuiop";
      string sr="asdfghjkl";
      string tr="zxcvbnm";
      unordered_map<char,int>row;
      for(char c:fr){row[c]=1;}
      for(char c:sr) row[c]=2;
      for(char c:tr) row[c]=3;

      
      for(string w:words){
        int first=row[tolower(w[0])];
        bool valid=true;

        for(char c:w){
            if(row[tolower(c)]!=first){
                valid=false;
                break;
            }
        }
        if(valid) ans.push_back(w);
      }

      return ans;
    }
};