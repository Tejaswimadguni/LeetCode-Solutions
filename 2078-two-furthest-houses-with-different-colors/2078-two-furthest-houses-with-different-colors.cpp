class Solution {
public:
    int maxDistance(vector<int>& colors) {
        int j=colors .size()-1;
        int i=0;
        int m=j;
        int dist=INT_MIN;
        if(j==0)return 0;
        while(j>0){
         if(colors[i]!=colors[j]){
            dist=max(j-i,dist);
         }
         j--;
        }

         while(i<m+1){
         if(colors[i]!=colors[m]){
            dist=max(m-i,dist);
         }
         i++;
        }
        return dist;
    }
};