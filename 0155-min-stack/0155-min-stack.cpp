class MinStack {
    stack<int>st1;
    stack<int>st2;
    int minn;

public:
    MinStack() {
    minn=INT_MAX;
    }
    
    void push(int value) {
        st1.push(value);
        minn=min(minn,value);
        st2.push(minn);
    }
    
    void pop() {
        if(st1.empty())return;
        st1.pop();
        st2.pop();
        if(!st2.empty())minn=st2.top();
        else{minn=INT_MAX;}
    }
    
    int top() {
        return st1.top();
        
    }
    
    int getMin() {
        return st2.top();
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(value);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */