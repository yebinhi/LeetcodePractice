// https://leetcode.com/problems/evaluate-reverse-polish-notation

class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> s;
        for(int i=0; i<tokens.size(); i++){
            if(isOp(tokens[i])){
                int x = s.top();
                s.pop();
                int y = s.top();
                s.pop();
                s.push(calcu(x, y, tokens[i]));
            }else{
                s.push(stoi(tokens[i], nullptr, 10));
            }
            
        }
        return s.top();
    }
    bool isOp(string str){
        if(str == "+" || str=="-" || str=="*" || str=="/"){
            return true;
        }
        return false;
    }
    int calcu(int x, int y, string str){
        if(str=="+")
            return x+y;
        if(str=="-")
            return x-y;
        if(str=="*")
            return x*y;
        if(str=="/"){
            if(x==0){
                return 0;
            }
            return x/y;
        }
                    
    }
};