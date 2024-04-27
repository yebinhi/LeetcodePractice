// https://leetcode.com/problems/reverse-words-in-a-string

class Solution {
public:
    void reverseWords(string &s) {
        int n=s.size();
        if(n<=0) return;
        int j=n;
        string res;
        for(int i=n-1; i>=0; i--){
            if(s[i]== ' '){
                j=i;
            }else if(i==0 || s[i-1]==' '){
                if(!res.empty()) res.append(" "); 
                res.append(s.substr(i, j));
            }
        }
        return res;
        
        
    }
};