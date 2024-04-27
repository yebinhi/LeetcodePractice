// https://leetcode.com/problems/valid-parentheses

class Solution {
public:
    bool isValid(string s) {
        stack<char> s1;
        map<char, char> m;
        m['(']=')';
        m['[']=']';
        m['{']='}';
        string::iterator it = s.begin();
        for(;it!=s.end(); ++it){
            if(!s1.empty()){
              
                char c = s1.top();
                if(m[c] == *it){
                    s1.pop();
                }else{
                    s1.push(*it);
                }
                
            
            }else{
                s1.push(*it); 
            }
            
        }
        return s1.empty();
    }
};