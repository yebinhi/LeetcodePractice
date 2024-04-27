// https://leetcode.com/problems/valid-number

class Solution {
public:
    bool isNumber(string s) {
        if(s.size()<=0) return false;
        
        auto it=s.begin(), end=s.end();
        while(it<end && *it== ' ')it++;
        if(it<end && (*it == '+' || *it == '-')) it++;
        bool firstPart=false;
        while(it<end && isdigit(*it)){
            firstPart=true;
            it++;
        }
        if(it<end && *it== '.'){
            it++;
            
            while(isdigit(*it)){
                firstPart=true;
                it++;
            }
        }
        
        if(firstPart && *it=='e'){
            firstPart=false;
            it++;
            if(*it== '+'|| *it=='-') it++;
            while(isdigit(*it)){
                firstPart=true;
                it++;
            }
        }
        
        while(firstPart && it<end && *it== ' ') it++;
        
        return firstPart && it==end;
        
    }
};