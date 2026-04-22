class Solution {
public:
    int myAtoi(string s) {
         vector<int> ans;
        bool valid = true;
        int i = 0;
        long long int num = 0;
        int sign = 1;
        int si=0;
        while(i < s.size() && s[i] == ' '){
            i++;
        }

        while(valid && i < s.size()){

            if(ans.empty()){
                if(s[i] == '-') {
                    sign = -1;
                    i++;
                    si++;
                    continue;
                }
                if(s[i] == '+'){
                    i++;
                    si++;
                    continue;
                }
                if(!(s[i] >= '0' && s[i] <= '9')){
                    break;
                }
            }

            if(s[i] >= '0' && s[i] <= '9'){
                ans.push_back(s[i] - '0');
                i++;
            }
            else{
                valid = false;
            }
        }

      for(int i = 0; i < ans.size(); i++){

    if(num > (INT_MAX - ans[i]) / 10){
        if(sign == 1) return INT_MAX;
        else return INT_MIN;
    }

    num = num * 10 + ans[i];
}

        if(si>1){return 0;}
        return sign * num;}
    
};