class MinStack {


    stack<int>st;
    int min = INT_MAX;
public:
    MinStack() {
       
    }
    
    void push(int val) {
        if(val <= min){
            st.push(min);
            min = val;
        }
        st.push(val);
        
    }
    
    void pop() {
        int temp = st.top();
        st.pop();
        
        if(temp == min){
            min = st.top();
            st.pop();
        }
    }
    
    int top() {
        return st.top();
    }
    
    int getMin() {
        return min;
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(val);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */