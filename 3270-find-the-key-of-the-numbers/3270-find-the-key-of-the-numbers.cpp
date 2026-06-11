class Solution {
  private: int cnt(int num){
    int count=0;
    if(num==0)return 1;
    while(num>0){
        count++;
        num/=10;
    }
    return count;
  }  
public:
    int generateKey(int num1, int num2, int num3) {
        string n1,n2,n3;
        int sz1=4-cnt(num1),sz2=4-cnt(num2),sz3=4-cnt(num3);
        for(int i=0;i<sz1;i++)n1+="0"; 
        for(int i=0;i<sz2;i++)n2+="0"; 
        for(int i=0;i<sz3;i++)n3+="0"; 

        n1+=to_string(num1);
        n2+=to_string(num2);
        n3+=to_string(num3);
        string ans;
        for(int i=0;i<4;i++){
            char minn = min(n1[i], min(n2[i], n3[i]));
            ans.push_back(minn);
        }
        return stoi(ans);

    }
};