class Solution {
private: bool vov(char ch){
    if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u'){
        return true;
    }
    return false;
}
public:
    int vowelStrings(vector<string>& words, int left, int right) {
        int ans=0;
        for(int i=left;i<=right;i++){
            int k=words[i].size();
            string s=words[i];
            if(vov(s[0]) && vov(s[k-1])){
                ans++;
            }
        }
        return ans;
    }
};