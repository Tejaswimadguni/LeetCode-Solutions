class RecentCounter {

public:
    
    queue<int>arr;
    int minn,maxx;
    RecentCounter() {
        minn=0;
        maxx=0;
    }
    
    int ping(int t) {
        arr.push(t);
        minn=t-3000;
        maxx=t;
        while(!arr.empty() && arr.front()<minn)arr.pop();

        return arr.size();
    }
};

/**
 * Your RecentCounter object will be instantiated and called as such:
 * RecentCounter* obj = new RecentCounter();
 * int param_1 = obj->ping(t);
 */