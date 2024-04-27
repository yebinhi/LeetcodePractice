// https://leetcode.com/problems/valid-parentheses

class Solution {
public:
    bool isValid(string s) {
        int n=s.size();
        if(n<=0) return true;
        
        stack<char> st;
        map<char, char> m;
        m['(']=')'; m['{']='}'; m['[']=']';
        
        for(int i=0; i<n; i++){
            if(!st.empty()){
                if(m[st.top()] == s[i]) st.pop();
                else st.push(s[i]);
            }else{
                st.push(s[i]);
            }
        }
        return st.empty();
        
    }
};