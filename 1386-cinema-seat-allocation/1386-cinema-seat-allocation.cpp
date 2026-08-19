class Solution {
public:
    int maxNumberOfFamilies(int n, vector<vector<int>>& reserved) {
        unordered_map<int,unordered_set<int>>book;
        for(auto &x:reserved){
            book[x[0]].insert(x[1]);
        }
       
        int ans=0;

        for(auto &p : book){
            int i=p.first;
            int j=2;
            bool cs1=false,cs2=false,cs3=false;
            while(j<=5){
                if(book[i].count(j)){
                    break;
                }
                if(j==5)cs1=true;
                j++;
            }
            
            if(!cs1){
                j=4;
                while(j<=7){
                    if(book[i].count(j)){
                        break;
                    }
                    if(j==7)cs2=true;
                    j++;
                }
            }
            j=6;
            while(j<=9){
                if(book[i].count(j)){
                        break;
                    }
                    if(j==9)cs3=true;
                    j++;
            }

           if(cs1 && cs3)
    ans += 2;
else if(cs1 || cs3)
    ans += 1;
else if(cs2)
    ans += 1;
 
            
        }
        ans += (n - book.size()) * 2;
        return ans;
    }
};