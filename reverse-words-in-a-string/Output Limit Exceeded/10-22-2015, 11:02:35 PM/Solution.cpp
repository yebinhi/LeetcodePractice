// https://leetcode.com/problems/reverse-words-in-a-string

class Solution {
public:
    void reverseWords(string &s) {
        if(s.empty()) return;
        string result;
        int len(s.size()-1);
        for(int i=len; i>=0; i--){
            int tmp=len;
            if(s[i] == ' '){
                result.append(s.substr(i+1,tmp));
                tmp=i-1;
            }
            
        }
        s=result;
    }
};