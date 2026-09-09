class Solution {
public:
    long long countCommas(long long n) {
        if(n<1000)return 0;
        map<int,long long>mp;
        mp[1] = 999999 - 1000 + 1;
        mp[2] = 999999999 - 1000000 + 1;
        mp[3] = 999999999999LL - 1000000000LL + 1;
        mp[4] = 999999999999999LL - 1000000000000LL + 1;
        mp[5] = 999999999999999999LL - 1000000000000000LL + 1;
        mp[6] = 9223372036854775807LL - 1000000000000000000LL + 1;
        long long ans=0;
        if(n<=999999){
            ans+=n-999;
        }else if(n<=999999999){
            ans+=(n-1000000 + 1)*2;
            ans+=mp[1];
        }else if(n<=999999999999LL){
            ans+=(n-1000000000LL + 1)*3;
            ans+=mp[1]+mp[2]*2;
        }else if(n<=999999999999999LL){
            ans+=(n-1000000000000LL + 1)*4;
            ans+=mp[1]+mp[2]*2+mp[3]*3;
        }else if(n<=999999999999999999LL){
            ans+=(n-1000000000000000LL + 1)*5;
            ans+=mp[1]+mp[2]*2+mp[3]*3+mp[4]*4;
        }else if(n<=9223372036854775807LL){
            ans+=(n-1000000000000000000LL + 1)*6;
            ans+=mp[1]+mp[2]*2+mp[3]*3+mp[4]*4+mp[5]*5;
        }

        return ans;


    }
};