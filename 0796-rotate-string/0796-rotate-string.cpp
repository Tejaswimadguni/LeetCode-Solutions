class Solution {
    private:
    string ans(string s){
        int k = 1;

        k %= s.size();

        s = s.substr(s.size() - k) + s.substr(0, s.size() - k);
        return s;
    }
public:
    bool rotateString(string s, string goal) {

        if(s.size()!=goal.size())return false;
        if(s.empty())return false;
        string orignal=s;
        while(true){
            s=ans(s);
            if(s==goal){
                return true;
            }
            if(s==orignal){
                break;
            }

        }
        return false;
    }
};