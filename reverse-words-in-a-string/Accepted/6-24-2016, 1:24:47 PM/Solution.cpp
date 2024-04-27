// https://leetcode.com/problems/reverse-words-in-a-string

class Solution {
public:
    void reverseWords(string &s) {
        int n=s.size(), k=n;
        string res;
        for(int i=n-1; i>=0; i--){
            if(s[i]== ' '){
                k=i;
            }else if(s[i-1] == ' ' || i==0){
                if(res.size() != 0) res.append(" ");
                res.append(s.substr(i, k-i));
            }
        }
        s=res;
    }
};