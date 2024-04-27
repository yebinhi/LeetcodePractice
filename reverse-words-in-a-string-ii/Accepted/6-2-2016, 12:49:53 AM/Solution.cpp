// https://leetcode.com/problems/reverse-words-in-a-string-ii

class Solution {
public:
    void reverseWords(string &s) {
        reverse(s.begin(), s.end());
        
        for(string::iterator b = s.begin(), e = s.begin(); e <=s.end(); e++){
            if(*e == ' ' || e==s.end()){
                reverse(b, e);
                b= e+1;
            }
        }
    }
};