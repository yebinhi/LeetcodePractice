// https://leetcode.com/problems/valid-number

class Solution {
public:
    bool isNumber(string s) {
        if(s.size() <=0) return false;
        auto it=s.begin(), e=s.end();
        
        while(it != e && *it == ' ') it++;
        
        if(it != e && (*it == '+' || *it == '-')) it++;
        bool isNumeric=false;
        
        while(it != e && isdigit(*it)){
            it++;
            isNumeric=true;
        }
        if(it != e && *it == '.'){
            it++;
            while(it != e && isdigit(*it)){
                it++;
                isNumeric=true;
            }
        }
        
        while(it != e && *it == ' ') it++;
        return isNumeric && it == e;
    }
};