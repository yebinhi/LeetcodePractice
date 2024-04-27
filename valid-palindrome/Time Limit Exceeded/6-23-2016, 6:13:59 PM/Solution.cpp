// https://leetcode.com/problems/valid-palindrome

class Solution {
public:
    bool isPalindrome(string s) {
        
        int start=0, end=s.size()-1; 

        while(start<end){
            while(!isalnum(s[start]) && start<end) start++;
            while(!isalnum(s[end]) && start<end) end--;
            if(tolower(s[start]) != tolower(s[end]))
                return false;
            
        }
        return true;
    }
};