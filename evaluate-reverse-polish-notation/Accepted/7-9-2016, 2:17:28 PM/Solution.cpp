// https://leetcode.com/problems/evaluate-reverse-polish-notation

class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        int n=tokens.size();
        if(n<=0) return 0;
        
        stack<int> sk;
        for(int i=0; i<n; i++){
            string c=tokens[i];
            if(isOp(c)){
                int y= sk.top(); sk.pop();
                int x= sk.top(); sk.pop();
                sk.push(calcu(x, y, c));
            }else{
                sk.push(stoi(tokens[i], nullptr, 10));
            }
        }
        return sk.top();
    }
    
    bool isOp(string &c){
        if(c=="+" || c=="-" || c=="*" || c=="/") return true;
        return false;
    }
    
    int calcu(int x, int y, string c){
        if(c=="+")
            return x+y;
        else if(c=="-")
            return x-y;
        else if(c=="*")
            return x*y;
        else if(c=="/")
            return x/y;
        return 0;
    }
};