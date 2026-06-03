class Solution {
public:
    string categorizeBox(int length, int width, int height, int mass) {
        bool heavy=false;
        bool  bulky=false;
    long long vol=1000000000;
    long long dim=10000; 
    long long int volume=1LL*length*height*width;
        if(length>=dim || width>=dim || height>=dim || volume>=vol)bulky=true;
        if(mass>=100)heavy=true;

        if(bulky && heavy)return "Both";
        if(!bulky && !heavy)return "Neither";
        if(bulky && !heavy)return "Bulky";


        return "Heavy";

    }
};