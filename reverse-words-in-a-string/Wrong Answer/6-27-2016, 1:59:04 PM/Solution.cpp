// https://leetcode.com/problems/reverse-words-in-a-string

class Solution {
public:
    void reverseWords(string &s) {
        int n=s.size(), k=n;
        if(n<=0) return;
        string res;
        for(int i=n-1; i>=0; i--){
            if(s[i]==' '){
                k=i;
            }else if(s[i-1] == ' ' || i==0){
                res.append(s.substr(i, k-i));
            }
        }
        s=res;
    }
};