class Solution {
public:
    int mostFrequentEven(vector<int>& nums) {
        int n=nums .size();
        unordered_map<int,int>freq;
        for(int i:nums){
            if(i%2==0){
                freq[i]++;
            }
        }
        vector<int> ans;
        for(auto i:freq){
            ans.push_back(i.second);
        }
        sort(ans.begin(),ans.end());
        int m=ans.size(),k=0,j=INT_MAX;
        for(int i:ans){
            if(i==ans[m-1]){
                k++;
            }
        }
        if(k>1){
            for(auto i:freq){
                if(i.second==ans[m-1]){
                    j=min(j,i.first);
                }
            }
            return j;
        } else if(k<=1){
            for(auto i:freq){
                if(i.second==ans[m-1]){
                    return i.first;
                }
        }
    }

    return -1;
    }
};