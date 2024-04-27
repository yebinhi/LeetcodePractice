// https://leetcode.com/problems/valid-palindrome

class Solution {
public:
    bool isPalindrome(string s) {
        if(s.empty()) return true;
        int start(0), end(s.size()-1);
        for(start<end){
            if(!isalnum(s[start])) start++;
            if(!isalnum(s[end])) end--;
            if(s[start] != s[end]) return false;
        }
        return true;
    }
};