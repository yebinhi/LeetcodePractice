// https://leetcode.com/problems/valid-palindrome

class Solution {
public:
    bool isPalindrome(string s) {
        int n=s.size();
        if(n<=0) return true;
        int S=0, E=n-1;
        
        while(s<e){
            while(s<n && isalnum(s[S])) S++;
            while(E>=0 && isalnum(s[E])) E--;
            if(s[S++] != s[E++]) return false; 
        }
        
        return true;
    }
};