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
            char L= valid(s[left]);
            char R= valid(s[right]);
            if(valid(s[left]) == ' '){
            left++;
            continue;
            }
            
            if(valid(s[right]) == ' '){
            right--;
            continue;
            }
            if(L != R){
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
            return s+32;
        }
        if(s>='0' && s<='9'){
            return s;
        }
        return ' ';
    }
};