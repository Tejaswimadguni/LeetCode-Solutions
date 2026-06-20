class Solution {
public:
    int maxArea(vector<int>& height) {
     int i=0,j=height.size()-1,ans=0;
     while(i<j){
        int high=min(height[i],height[j]);
        int width=j-i;
        int area=width*high;
        ans=max(ans,area);
        if(height[i]<height[j])i++;
            else {j--;}
     }   

     return ans;
    }
};