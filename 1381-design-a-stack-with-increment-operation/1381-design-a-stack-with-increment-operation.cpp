class CustomStack {
public:
    int* arr;
    int top;
    int size;
    CustomStack(int maxSize) {
        this->size = maxSize;
        arr = new int[size];
        top = -1;
    }

    void push(int x) {
        if (size - top > 1) {
            top++;
            arr[top] = x;
        } else {
            cout << "stack full";
        }
    }

    int pop() {
        if (top >= 0 && top < size) {
            return arr[top--];
        } else {
            return -1;
            ;
        }
    }

    void increment(int k, int val) {
        int limit = min(k, top + 1);

        for (int i = 0; i < limit; i++) {
            arr[i] += val;
        }
    }
};

/**
 * Your CustomStack object will be instantiated and called as such:
 * CustomStack* obj = new CustomStack(maxSize);
 * obj->push(x);
 * int param_2 = obj->pop();
 * obj->increment(k,val);
 */