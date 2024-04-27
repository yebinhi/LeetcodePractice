// https://leetcode.com/problems/roman-to-integer

class Solution {
public:
    int romanToInt(string s) {
        if(s.size()<=0) return 0; 
        map<char, int> m;
        m['M']=1000;
        m['D']=500;
        m['C']=100;
        m['L']=50;
        m['X']=10;
        m['V']=5;
        m['I']=1;
        
        int total=0, prev=0;
        for(auto c:s){
            int curr=m[c];
            total+=(prev<curr) ? (curr-2*prev) : curr;
            prev=curr;
        }
        
        return total;
    }
};