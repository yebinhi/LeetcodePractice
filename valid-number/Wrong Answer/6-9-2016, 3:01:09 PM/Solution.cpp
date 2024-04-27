// https://leetcode.com/problems/valid-number

class Solution {
public:
    bool isNumber(string s) {
        int length=s.size();
        if(length <=0 || length == NULL){
            return false;
        }
        
        int left=0;
        while(s[left] == ' '){
            left++;
        }
        
        if(s[left]== '+' || s[left]=='-'){
            left++;
        }
        
        bool isNumeric = false;
        while(left<length && isdigit(s[left])){
            left++;
            isNumeric = true;
        }
        if(left<length && s[left]== '.'){
            left++;
            while(left<length && isdigit(s[left])){
                left++;
                isNumeric = true;
            }
        }
        
        if(left<length && s[left]== 'e'){
            left++;
            isNumeric=false;
            if(left<length && (s[left]=='+'||s[left]=='-')) left++;
            while(left<length && isdigit(s[left])){
                left++;
                isNumeric = true;
            }
            
        }
        while(left<length && s[left]==' '){
            left++;
        }
        
        return isNumeric && left==length;
    }
    
    
};