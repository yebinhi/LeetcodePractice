// https://leetcode.com/problems/valid-palindrome

class Solution {
public:
    bool isPalindrome(string s) {
        int st=0, en=s.size()-1;
        
        while(!isalnum(s[st])) st++;
        while(!isalnum(s[en])) en--;
        while(st<en){
            if(s[st] != e[en]) return false;
            s++;
            e--;
        }
        return s>=e;
    }
};