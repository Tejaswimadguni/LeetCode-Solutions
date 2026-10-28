class Solution {
public:
    int maxChunksToSorted(vector<int>& arr) {
        
        vector<int>rsum;
        int s=0;
    for(int i:arr){
        s+=i;
        rsum.push_back(s);
    }
    int ans=0;
        for(int i=0;i<arr.size();i++){
            int summ=(i*(i+1))/2;
            if(rsum[i]==summ)ans++;
        }

        return ans;
    }
};