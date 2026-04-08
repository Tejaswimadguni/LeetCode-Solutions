class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int c1=0,c2=69;
       int count1=0,count2=0;

       int n=nums .size();
       for(int i:nums){

        if(i==c1){
            count1++;
        }
        else if(i==c2){
            count2++;
        }
        else if(count1==0){
            c1=i;
            count1=1;
        }
        else if(count2==0){
            c2=i;
            count2=1;
        }
        else{
            count1--;
            count2--;
        }
       }

       count1=count2=0;

       for(int i:nums){
        if(i==c1)count1++;
        if(i==c2)count2++;
       }

       vector<int> ans;
       if(count1>n/3)ans.push_back(c1);
       if(count2>n/3)ans.push_back(c2);

       return ans;
    }
};