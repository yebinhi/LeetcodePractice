// https://leetcode.com/problems/string-to-integer-atoi

class Solution {
public:
    int myAtoi(string str) {
        int n=str.size();
        unsigned long long res =0;
        bool isNeg=false;
        if(n<=0) return 0;
        
        auto s=str.begin(), e=str.end();
        e--;
        while(*s == ' ') s++;
        while(*e == ' ') e--;
        
        if(!isdigit(*s) && *s != '+' && *s != '-') return 0;
        
        if(*s == '+' || *s == '-'){
            if(!isdigit(*s+1)) return 0;
            if(*s == '-') isNeg=true;
            s++;
        }
        
        while(isdigit(*s)){
            res= res*10+(*s-'0');
            if(res>(unsigned long long)INT_MAX) return isNeg ? -(int)res : (int)res;
            s++;
        }
        return isNeg ? -(int)res : (int)res;
    }
};