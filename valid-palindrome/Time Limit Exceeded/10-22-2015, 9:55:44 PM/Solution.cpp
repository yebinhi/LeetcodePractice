// https://leetcode.com/problems/valid-palindrome

class Solution {
public:
    bool isPalindrome(string s) {
        
        int start(0), end(s.size()-1); 

        while(start<end){
            if(!isalnum(s[start])) {
                start++;
            }else if(!isalnum(s[end])){
                end--;
            }else if(s[start] != s[end]){
                return false;
            }
        }
        return true;
    }
};