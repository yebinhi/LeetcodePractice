// https://leetcode.com/problems/valid-palindrome

class Solution {
public:
    bool isPalindrome(string s) {
        int st=0, en=s.size()-1;
        while(st<en){
            while(st<s.size() && !isalnum(s[st])) st++;
            while(en>=0 && !isalnum(s[en])) en--;
            if(st>en) break;
            if(tolower(s[st++]) != tolower(s[en--])) return false;
        }
        return true;
    }
};