// https://leetcode.com/problems/min-stack

class MinStack {
public:
    stack<int> *s, *m;
    /** initialize your data structure here. */
    MinStack() {
        s= new stack<int>();
        m= new stack<int>();
    }
    
    void push(int x) {
        if(s->empty() || x<=m->top()) m->push(x);
        s->push(x);
    }
    
    void pop() {
        if(s->top() == m->top()) m->pop();
        s->pop();
    }
    
    int top() {
        return s->top();
    }
    
    int getMin() {
        return m->top();
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack obj = new MinStack();
 * obj.push(x);
 * obj.pop();
 * int param_3 = obj.top();
 * int param_4 = obj.getMin();
 */