// https://leetcode.com/problems/string-to-integer-atoi

class Solution {
public:
    int myAtoi(string str) {
        if(str.size()<=0) return 0;
        bool isNeg=false;
        unsigned long long res=0;
        
        auto itr=str.begin();
        while(!isdigit(*itr) && *itr== ' ') itr++;
        
        if(!isdigit(*itr) && (*itr == '+' || *itr == '-')){
            if(*itr=='-') isNeg=true;
            itr++;
        }
        
        while(isdigit(*itr)) {
            res=res*10+(*itr-'0');
            if(res>(unsigned long long)INT_MAX) return INT_MAX;
            itr++;
        }
        
        return isNeg? -(int)res : (int)res;
        
        
    }
};