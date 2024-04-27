// https://leetcode.com/problems/valid-palindrome

class Solution {
public:
    bool isPalindrome(string s) {
        if(s.size()<=0) return true;
        int E=s.size()-1, S=0;
        
        while(S<E){
            while(S<s.size()-1 && !isalnum(s[S])) S++;
            while(E>=0 && !isalnum(s[E])) E--;
            if(S==E) break;
            if(tolower(s[S++]) != tolower(s[E--])) return false;
        }
        return true;
        
        
    }
};