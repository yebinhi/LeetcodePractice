// https://leetcode.com/problems/valid-parentheses

class Solution {
public:
    bool isValid(string s) {
        int n=s.size();
        if(n<=0) return true;
        
        map<char, char> m;
        m['(']=')'; m['{']='}'; m['[']=']';
        stack<char> sk;
        for(int i=0; i<n; i++){
            if(sk.empty()){
                sk.push(s[i]);
            }else{
                if(m[sk.top()] == s[i]) sk.pop();
                else sk.push(s[i]);
            }
        }
        return sk.empty();
    }
};