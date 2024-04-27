// https://leetcode.com/problems/reverse-words-in-a-string

class Solution {
public:
    void reverseWords(string &s) {
        int n=s.size(), count=n-1;
        string res;
        if(n<=0) return;
        for(int i=n-1; i>=0; i--){
            
            if(s[i-1]==0 ){
                if(res.empty() || i==0){
                    res.append(s.substr(i, count-i));
                }
                else{
                    res.append(s.substr(i, count-i));
                    res.append(" ");
                }
                count=i-1;
            }
        }
    }
};