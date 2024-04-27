// https://leetcode.com/problems/valid-palindrome

class Solution {
public:
    bool isPalindrome(string s) {
        int st=0; en=s.size()-1;
        
        while(!isalphnum(s[st])) st++;
        while(!isalphnum(s[en])) en--;
        while(s<e){
            if(s[st] != e[en]) return false;
            s++;
            e--;
        }
        return s>=e;
    }
};