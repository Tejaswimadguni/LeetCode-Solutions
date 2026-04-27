class Solution {
public:
    int mirrorFrequency(string s) {
        unordered_map<char,int>freq;
       for(char ch:s){
        freq[ch]++;
       }
       unordered_set<char>used;
       for(auto &it : freq){
            char c = it.first;
            if(used.count(c)) continue;
       }

       int sum=0;
        for(auto &it : freq) {
            char c = it.first;

            if(used.count(c)) continue;

            char m;
          if(c >= 'a' && c <= 'z'){
            m='z'-(c-'a');
          }else{m='9'-(c-'0');}

          int f1=freq[c];
          int f2=freq.count(m)?freq[m]:0;

          sum+=abs(f1-f2);
          used.insert(c);
          used.insert(m);
  
  
  
  
  }

  return sum;
    }
};