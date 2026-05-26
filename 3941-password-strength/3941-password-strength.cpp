class Solution {
public:
    int passwordStrength(string password) {
        unordered_set<char>up,low,charr,num;
        for(char ch :password){
            if(islower(ch)){
                low.insert(ch);
            }else if(isupper(ch)){
                up.insert(ch);
                
            }else if(ch>='0' && ch<='9'){
                num.insert(ch);
            }else{
                charr.insert(ch);
            }
        }
    int ans=(1*low.size())+(2*up.size())+(3*num.size())+(5*charr.size());
        
        
        return ans;
    }
};