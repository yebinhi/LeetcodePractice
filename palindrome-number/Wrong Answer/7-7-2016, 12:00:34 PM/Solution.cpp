// https://leetcode.com/problems/palindrome-number

class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0) return false;
        if(x==0) return true;
        int newx=x;
        int count=1;
        
        while(newx/count>=10){
            count*=10;
        }
        
        while(x!=0){
            int e=x%10;
            int f=x/count;
            if(e !=f) return false;
            x=(x%count)/10;
            count/=10;
        }
        return true;
    }
};