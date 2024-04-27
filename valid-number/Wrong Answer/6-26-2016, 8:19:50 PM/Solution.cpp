// https://leetcode.com/problems/valid-number

class Solution {
public:
    bool isNumber(string s) {
        if(s.size()<=0) return false;
        
        auto it=s.begin();
        bool firstpart=false;
        while(!isdigit(*it) && *it == ' ') it++;
        if(!isdigit(*it) && (*it=='+' || *it=='-')) it++;
        
        while(isdigit(*it)){
            it++;
            firstpart=true;
        }
        if(!isdigit(*it) && (*it == '.' || *it=='e')){
            firstpart = false;
            it++;
            if(isdigit(*it)) firstpart = true;
        }
        while(isdigit(*it)) it++;
        while(*it == ' ') it++;
        return it==s.end() && firstpart;
        
    }
};