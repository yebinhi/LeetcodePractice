// https://leetcode.com/problems/valid-number

class Solution {
public:
    bool isNumber(string s) {
        if(s.size()<=0) return false;
        
        auto it=s.begin();
        while(*it == ' ') it++;
        
        if(!isdigit(*it) && *it != '-' && *it != '+' && *it != '.') return false;
        
        if(*it=='+' || *it == '-' || *it=='.'){
            it++;
            if(!isdigit(*it)) return false;
        }
        
        while(isdigit(*it)) it++;
        if(*it == '.') it++;
        
        if(*it == 'e'){
            it++;
            if(isdigit(*it) &&*it != '+' && *it != '-'){
                return false;
            }else {
                it++;
            }
        }
        while(isdigit(*it)) it++;
        while(it!=s.end()){
            if(*it != ' ') return false;
            it++;
        }
        return true;
    }
};