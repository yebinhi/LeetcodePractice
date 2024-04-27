// https://leetcode.com/problems/valid-number

class Solution {
public:
    bool isNumber(string s) {
        if(s.size()<=0) return false;
        
        auto it=s.begin(), end=s.end();
        while(it!= end && *it == ' ') it++;
        
        if(it!=end && !isdigit(*it) && (*it == '+' || *it=='-')) it++;
        
        bool isNumeric=false;
        while(it !=end && isdigit(*it)){
            isNumeric=true;
            it++;
        }
        //if(isNumric && it==end) return true;
        if(it!=end && !isdigit(*it) && *it=='.'){
            isNumeric = false;
            it++;
            while(isdigit(*it) && it != end){
                isNumeric=true;
                it++;
            }
        }
        
        if(isNumeric && it!=end && !isdigit(*it) && *it=='e'){
            isNumeric=false;
            it++;
            if(it!=end && !isdigit(*it) && (*it=='+' || *it=='-')) it++;
            while(isdigit(*it) && it != end){
                isNumeric=true;
                it++;
            }
        }
        
        while(it != end && !isdigit(*it) && *it==' ') it++;
            
        return isNumeric && it == end;
    }
};