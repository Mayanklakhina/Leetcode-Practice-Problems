class MyStack {
public:
        queue<int> queue;
    MyStack() {
        
    }
    
    void push(int x) {
        queue.push(x);
        
         for ( int i = 0; i < queue.size()-1; i++){
                 queue.push(queue.front());
                 queue.pop();
         }
    }
    
    int pop() {
        int x = queue.front();
            queue.pop();
            
            return x;
    }
    
    int top() {
            return queue.front();
        
    }
    
    bool empty() {
        return queue.empty();
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