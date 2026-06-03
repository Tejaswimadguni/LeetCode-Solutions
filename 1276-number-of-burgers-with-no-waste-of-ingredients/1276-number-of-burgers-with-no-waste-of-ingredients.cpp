class Solution {
public:
    vector<int> numOfBurgers(int tomatoSlices, int cheeseSlices) {
        if(tomatoSlices%2!=0)return {};
         if (tomatoSlices < 2 * cheeseSlices ||
            tomatoSlices > 4 * cheeseSlices)
            return {};
        int x=(tomatoSlices-2*cheeseSlices)/2;
        int y=cheeseSlices-x;

        return {x,y};
    }
};