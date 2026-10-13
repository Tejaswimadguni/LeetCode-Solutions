class BrowserHistory {
stack<string>st1;
stack<string>st2;
int s1,s2;    
public:
    BrowserHistory(string homepage) {
        
        st1.push(homepage);
    }
    
    void visit(string url) {
        while(!st2.empty())st2.pop();
        st1.push(url);
    }
    
    string back(int steps) {
        while(steps-- > 0 && st1.size() > 1){
            st2.push(st1.top());
            st1.pop();
        }
        return st1.top();

    }
    
    string forward(int steps) {
        while(steps-- > 0 && !st2.empty()){
            st1.push(st2.top());
            st2.pop();
        }
        return st1.top();
    }
};

/**
 * Your BrowserHistory object will be instantiated and called as such:
 * BrowserHistory* obj = new BrowserHistory(homepage);
 * obj->visit(url);
 * string param_2 = obj->back(steps);
 * string param_3 = obj->forward(steps);
 */