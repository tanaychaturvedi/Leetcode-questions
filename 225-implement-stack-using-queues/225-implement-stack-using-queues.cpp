class MyStack {
public:
      stack<int> s;
    MyStack() {
      
    }
    
    void push(int x) {
        s.push(x);
    }
    
    int pop() {
        int p= s.top();
        s.pop();
        return p;
            
    }
    
    int top() {
        return s.top();
    }
    
    bool empty() {
        if(s.size()==0)return true;
        return false;
    }
};

/**
 * Your MyStack object will be instantiated and called as such:
 * MyStack* obj = new MyStack();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->top();
 * bool param_4 = obj->empty();
 */