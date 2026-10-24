class Solution {
public:
    int countDaysTogether(string arriveAlice, string leaveAlice, string arriveBob, string leaveBob) {
        int dA=0, dlA=0, dB=0, dlB=0, mA=0, mB=0, mla=0, mlb=0;

        mA = stoi(arriveAlice.substr(0, 2));
        dA = stoi(arriveAlice.substr(3, 2));

        mB = stoi(arriveBob.substr(0, 2));
        dB = stoi(arriveBob.substr(3, 2));

        mlb = stoi(leaveBob.substr(0, 2));
        dlB = stoi(leaveBob.substr(3, 2));

        mla = stoi(leaveAlice.substr(0, 2));
        dlA = stoi(leaveAlice.substr(3, 2));

        int days[] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

        int a1 = dA, a2 = dlA, b1 = dB, b2 = dlB;

        for (int i = 1; i < mA; i++) a1 += days[i];
        for (int i = 1; i < mla; i++) a2 += days[i];
        for (int i = 1; i < mB; i++) b1 += days[i];
        for (int i = 1; i < mlb; i++) b2 += days[i];

        if (min(a2, b2) < max(a1, b1)) return 0;

        return min(a2, b2) - max(a1, b1) + 1;
    }
};

