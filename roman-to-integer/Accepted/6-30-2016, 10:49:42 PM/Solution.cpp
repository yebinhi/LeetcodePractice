// https://leetcode.com/problems/roman-to-integer

class Solution {
public:
    int romanToInt(string s) {
        if(s.size()<=0) return 0;
        map<char, int> num;
        num['I']=1;
        num['V']=5;
        num['X']=10;
        num['L']=50;
        num['C']=100;
        num['D']=500;
        num['M']=1000;
        int res=0;
        for(int i=0; i<s.size(); i++){
            if(num[s[i]]<num[s[i+1]]) 
                res-=num[s[i]];
            else 
                res+=num[s[i]];
        }
        return res;
    }
};