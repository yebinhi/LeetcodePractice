// https://leetcode.com/problems/evaluate-reverse-polish-notation

class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        int n= tokens.size();
        if(n<=0) return 0;
        stack<int> s;
        for(int i=0; i<n; i++){
            if(isOp(tokens[i])){
                int y=s.top(); s.pop();
                int x=s.top(); s.pop();
                s.push(evaluate(x,y,tokens[i]));
            }else{
                s.push(stoi(tokens[i], nullptr, 10));
            }
        }
        return s.top();
    }
    bool isOp(string s){
        if(s=="+" || s=="-" || s=="*" || s== "/") return true;
        return false;
    }
    
    int evaluate(int x, int y, string op){
        if(op=="+")
            return x+y;
        else if(op=="-")
            return x-y;
        else if(op=="*")
            return x*y;
        else if(op== "/")
            return x/y;
    }
};