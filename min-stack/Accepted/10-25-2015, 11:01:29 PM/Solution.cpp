// https://leetcode.com/problems/min-stack

class MinStack {
    stack<int> s;
    stack<int> min;
public:
    void push(int x) {
        if(min.empty() || x<=min.top())
            min.push(x);
        s.push(x);
        
    }

    void pop() {
        if(s.top()==min.top())
            min.pop();
        s.pop();
    }

    int top() {
        return s.top();
    }

    int getMin() {
        return min.top();
    }
};