// https://leetcode.com/problems/string-to-integer-atoi

class Solution {
public:
    int myAtoi(string str) {
        int n=str.size();
        if(n<=0) return 0;
        unsigned long long res=0;
        bool isNeg=false;
        
        auto it=str.begin();
        while(*it == ' ' && !isdigit(*it)) it++;
        
        if(!isdigit(*it) && (*it=='-' || *it=='+')){
            if(*it=='-') isNeg=true;
            it++;
        }
        
        while(isdigit(*it)){
            res=res*10+(*it-'0');
            if(res> (unsigned long long)INT_MAX)
                return isNeg ? INT_MIN : INT_MAX;
            it++;
        }
        
        return isNeg ? -(int)res:(int)res;
        
        
        
    }
};