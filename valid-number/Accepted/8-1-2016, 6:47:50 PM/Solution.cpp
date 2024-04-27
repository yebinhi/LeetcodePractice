// https://leetcode.com/problems/valid-number

class Solution {
public:
    bool isNumber(string s) {
        int n=s.size();
        if(n<=0) return true;
        
        auto S=s.begin(), E=s.end();
        
        while(S!=E && *S==' ') S++;
        
        if(S != E && !isdigit(*S) && (*S=='-'|| *S=='+')) S++;
        
        bool isNumeric=false;
        
        while(S != E && isdigit(*S)){
            isNumeric=true;
            S++;
        }
        if(S != E && !isdigit(*S) && *S=='.'){
            
            S++;
            while(S!=E && isdigit(*S)){
                isNumeric=true;
                S++;
            }
        }
        if(isNumeric && S!=E && !isdigit(*S) && *S=='e'){
            isNumeric=false;
            S++;
            if(S !=E && !isdigit(*S) && (*S=='+' || *S=='-')) S++;
            while(S!=E && isdigit(*S)){
                isNumeric=true;
                S++;
            }
        }
        
        while(isNumeric&& !isdigit(*S) && *S== ' ') S++;
        
        return isNumeric && S==E;
        
    }
};