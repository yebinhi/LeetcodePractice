// https://leetcode.com/problems/min-stack

class MinStack {
public:
    /** initialize your data structure here. */
    stack<int> *s;
    stack<int> *m;
    MinStack() {
        s= new stack<int>();
        m= new stack<int>();
    }
    
    void push(int x) {
        if(m->empty() || m->top() >= x) m->push(x);
        s->push(x);
    }
    
    void pop() {
        if(s->top()==m->top()) m->pop();
        s>pop();
    }
    
    int top() {
        s->top();
    }
    
    int getMin() {
        m->top();
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