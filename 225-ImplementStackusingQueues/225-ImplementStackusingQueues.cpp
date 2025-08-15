// Last updated: 8/15/2025, 11:48:56 PM
class MyStack {
public:
    MyStack() {
        
    }
    queue<int> q;
    void push(int x) {
        int n=q.size();
        q.push(x);
        while(n)
        {
            q.push(q.front());
            q.pop();
            n--;
        }
    }
    
    int pop() {
        int x=q.front();
        q.pop();
        return x;
        
    }
    
    int top() {
        return q.front();
    }
    
    bool empty() {
        return q.empty();
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