// https://leetcode.com/problems/reverse-words-in-a-string

class Solution {
public:
    void reverseWords(string &s) {
        int n=s.size(), k=n-1;
        if(n<=0) return;
        string res;
        for(int i=n-1; i>=0; i++){
            if(s[i] == " "){
                k--;
                continue;
                
            }
            if(s[i-1] == " "){
                if(res.size() != 0) res.append(" ");
                res.append(s.substr(i, k-i));
                k=i-1;
            }
        }
        s=res;
    }
};