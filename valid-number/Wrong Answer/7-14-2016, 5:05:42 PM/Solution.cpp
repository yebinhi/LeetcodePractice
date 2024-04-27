// https://leetcode.com/problems/valid-number

class Solution {
public:
    bool isNumber(string s) {
        int n=s.size();
        if(n<=0) return true;
        
        auto S=s.begin(), E=s.end();
        
        while(S != E && *S == ' ') S++;
        bool isNumber=false;
        
        while(S!=E && isdigit(*S)){
            isNumber = true;
            S++;
        }
        if(isNumber && S != E && !isdigit(*S) && *S== '.'){
            isNumber=false;
            S++;
            while(isdigit(*S)){
                isNumber=true;
                S++;
            }
        }
        
        if(isNumber && S != E && !isdigit(*S) && *S=='e'){
            isNumber= false;
            S++;
            while(isdigit(*S)){
                isNumber=true;
                S++;
            }
        }
        
        while(isNumber && !isdigit(*S) && *S== ' ') S++;
        
        return S==E && isNumber;
    }
};