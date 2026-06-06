class MinStack {
public:
    //vector<int> mainclass()
    stack<int> st;
    stack<int> minst;
    MinStack() {
        
    }
    
    void push(int val) {
        st.push(val);
        if(minst.empty()){
            minst.push(val);

        }else{
            minst.push(min(minst.top(),val));
        }
    }
    
    void pop() {
        st.pop();
        minst.pop();
        //return null;
    }
    
    int top() {
        return st.top();

    }
    
    int getMin() {
        return minst.top();
    }
};
