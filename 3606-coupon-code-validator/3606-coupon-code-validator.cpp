class Solution {
public:
    vector<string> validateCoupons(vector<string>& code, vector<string>& businessLine, vector<bool>& isActive) {
        int n=code.size();
        vector<string>result;
        unordered_map<string, int> order = {
            {"electronics", 0},
            {"grocery", 1},
            {"pharmacy", 2},
            {"restaurant", 3}
        };
        vector<string> business={"electronics", "grocery", "pharmacy", "restaurant"};
        set<string> st(business.begin(), business.end());
        vector<pair<int, string>> temp;
        for(int i=0;i<n;i++){
            if(st.count(businessLine[i]) && isActive[i]){
                string ans=code[i];
                bool valid =false;
                if(ans.empty())continue;
                for(int j=0;j<ans.size();j++){
                    if(!isalnum(ans[j]) && ans[j] != '_'){
                        break;
                    }
                    else if(j==ans.size()-1)valid=true;
                }
                 if(valid)temp.push_back({order[businessLine[i]], code[i]});
            }
           
        }
      sort(temp.begin(), temp.end());
        for(auto &p : temp) {
            result.push_back(p.second);
        }
        return result;
    }
};