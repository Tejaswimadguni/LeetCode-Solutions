class Solution {
public:
    bool uniformArray(vector<int>& nums1) {
        int e1=INT_MAX,o1=INT_MAX;

        for(int i:nums1){
            if(i%2==0){
                e1=min(e1,i);
            }else{
                o1=min(o1,i);
            }
        }

        if((e1 !=INT_MAX && o1!=INT_MAX) && e1<o1)return false;
        return true;
    }
};