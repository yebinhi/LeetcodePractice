// https://leetcode.com/problems/reverse-words-in-a-string-ii

class Solution {
public:
    void reverseWords(string &s) {
        reverse(s.begin(), s.end());
        auto it1=s.begin();
        for(auto it2=s.begin(); it2 <= s.end(); it2++){
            if(*it2 == ' ' || it2 == s.end()){
                reverse(it1, it2);
                it1=it2+1;
            }
        }
    }
};