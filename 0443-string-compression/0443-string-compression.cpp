class Solution {
public:
    int compress(vector<char>& chars) {
        int n = chars.size();
    int i = 0, j = 0;
    int indx = 0;

    while(i < n) {
        int m = 0;
        j = i;

        while(j < n && chars[i] == chars[j]) {
            j++;
            m++;
        }

        chars[indx++] = chars[i];

        if(m > 1) {
            string s = to_string(m);
            for(char c : s) {
                chars[indx++] = c;
            }
        }

        i = j;
    }

    return indx;
    }
};