class MinStack {
public:
    vector<int>v;
    MinStack() {
        //MinStack ms = new MinStack();
        //vector<int>v;

    }
    
    void push(int val) {
        v.push_back(val);
        return;
    }
    
    void pop() {
        v.pop_back();
        return;
    }
    
    int top() {
        return v.back();
    }
    
    int getMin() {
        int minval=INT_MAX;
        for(auto i :v){
            minval=min(minval,i);
        }
        return minval;
    }
};
