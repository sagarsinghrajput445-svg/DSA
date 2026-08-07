class MinStack {
public:
    int arr[30000];
    int minArr[30000];
    stack<int> st;
    int size;
    MinStack() { size = -1; }
    void push(int value) {
        if (size == 30000)
            return;
        size++;
        arr[size] = value;
        if (size == 0)
            minArr[size] = value;
        else
            minArr[size] = min(value, minArr[size - 1]);
    }
    void pop() {
        if (size == -1)
            return;
        size--;
    }
    int top() {
        if (size == -1) {
            return -1;
        }
        return arr[size];
    }

    int getMin() {
        if (size == -1)
            return -1;
        return minArr[size];
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