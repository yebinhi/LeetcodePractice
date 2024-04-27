// https://leetcode.com/problems/palindrome-number

class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0) return false;
        if(x==0) return true;
        int newx=x;
        int count=1;
        while(newx!=0){
            newx/=10;
            count*=10;
        }
        
        while(x!=0 &7 count>0){
            int e=x%10;
            int f=x/count;
            x=x%count
            x=x/10;
            count/=10;
            if(e !=f) return false;
        }
        return true;
    }
};