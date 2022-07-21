class MinStack {
    stack<long> s;
    long minEle;
public:
    MinStack() {
        
    }
    
    void push(long long int val) {
            if(s.size()==0){
                    s.push(val);
                    minEle = val;
            }
            else{
                    if(val>=minEle){
                            s.push(val);
                    }
                    else{
                            s.push(2*val-minEle);
                            minEle = val;
                    }
            }
        }
        
    
    void pop() {
        if(s.top()>=minEle){
                s.pop();
        }
        else{
                minEle = 2*minEle-s.top();
                s.pop();
        } 
    }
    
    int top() {
        if(s.size()==0)
                return -1;
            else{
                    if(s.top()>=minEle)
                            return s.top();
                    else
                            return minEle;
            }
    }
    
    int getMin() {
        if(s.size()==0)
                return -1;
            return minEle;
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