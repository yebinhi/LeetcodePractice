// https://leetcode.com/problems/evaluate-reverse-polish-notation

class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        int len=tokens.size();
        if(len <= 0) return 0;
        
        stack<int> s;
        for(auto x:tokens){
            if(isOp(x)){
                int val1=s.top();
                s.pop();
                int val2=s.top();
                s.pop();
                s.push(getResult(val1, val2, x));
            }else{
                s.push(stoi(x, nullptr, 10));
            }
        }
        return s.top();
    }
    
    bool isOp(string str){
        if(str == "+" || str == "-" || str == "*" || str == "/") return true;
        return false;
    }
    
    int getResult(int val1, int val2, string str){
        if(str == "+"){
            return val1+val2;
        }
        else if(str == "-"){
            return val1-val2;
        }
        else if(str== "*"){
            return val1*val2;
        }
        else if(str == "/"){
            return val1/val2;
        } else {
            return 0;
        }
        
    }
};