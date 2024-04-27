// https://leetcode.com/problems/valid-palindrome

class Solution {
public:
    bool isPalindrome(string s) {
        
        int start(0), end(s.size()-1); 

        while(start<end){
            if(!isalnum(s[start]))
                start++;
            if(!isalnum(s[end]))
                end--;
            if(tolower(s[start]) != tolower(s[end]))
                return false;
            
        }
        return true;
    }
};