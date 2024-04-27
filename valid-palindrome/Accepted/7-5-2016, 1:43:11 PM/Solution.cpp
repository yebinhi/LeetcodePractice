// https://leetcode.com/problems/valid-palindrome

class Solution {
public:
    bool isPalindrome(string s) {
        int E=s.size()-1, S=0;
        if(E<0) return true;
        while(S<E){
            while(S<s.size()-1 && !isalnum(s[S])) S++;
            while(E>=0 && !isalnum(s[E])) E--;
            if(S>=E) break;
            if(tolower(s[S++]) != tolower(s[E--])) return false;
        }
        return true;
        
        
    }
};