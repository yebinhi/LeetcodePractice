// https://leetcode.com/problems/valid-number

class Solution {
public:
    bool isNumber(string s) {
        if(s.size()<=0) return false;
        
        auto it=s.begin();
        while(!isdigit(*it) && *it == ' ') it++;
        if(!isdigit(*it) && (*it=='+' || *it=='-')) it++;
        bool firstpart=true;
        while(isdigit(*it)) it++;
        if(firstpart && !isdigit(*it) && (*it == '.' || *it=='e')){
            firstpart = false;
            it++;
            if(isdigit(*it)) firstpart = true;
        }
        while(isdigit(*it)) it++;
        while(*it == ' ') it++;
        return it==s.end();
        
    }
};