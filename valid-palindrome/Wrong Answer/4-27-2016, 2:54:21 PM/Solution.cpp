// https://leetcode.com/problems/valid-palindrome

class Solution {
public:
    bool isPalindrome(string s) {
        int size= s.size();
        if(size == 0)
        return true;
        
        int left=0;
        int right=size-1;
        while(left < right){
            if(valid(s[left]) == ' '){
            left++;
            continue;
            }
            
            if(valid(s[right]) == ' '){
            right--;
            continue;
            }
            if(s[left] != s[right]){
                return false;
            }
            left++;
            right--;
        }
        return true;
    }
    char valid(char s){
        if(s>='a' && s<='z'){
            return s;
        }
        if(s>='A' && s<='Z'){
            return s;
        }
        if(s>='0' && s<='9'){
            return s;
        }
        return ' ';
    }
};