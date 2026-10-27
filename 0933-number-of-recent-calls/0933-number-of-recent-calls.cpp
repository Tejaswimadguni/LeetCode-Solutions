class RecentCounter {

public:
    
    vector<int>arr;
    int minn,maxx;
    RecentCounter() {
        minn=0;
        maxx=0;
    }
    
    int ping(int t) {
        arr.push_back(t);
        minn=t-3000;
        maxx=t;
        int reqst=0;
        for(int i=0;i<arr.size();i++){
            if(arr[i]>=minn && arr[i]<=maxx)reqst++;
        }
        return reqst;
    }
};

/**
 * Your RecentCounter object will be instantiated and called as such:
 * RecentCounter* obj = new RecentCounter();
 * int param_1 = obj->ping(t);
 */