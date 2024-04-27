// https://leetcode.com/problems/one-edit-distance

class Solution {
public:
    bool isOneEditDistance(string s, string t) {
        int n=s.size(); int h=t.size();
        if(n > h) return isOenEditDistance(t, s);
        if(t-n >1) return false;
        
        int shift=h-n; i=0;
        while(i<n && s[i]==t[i]) i++;
        if(i==n) return shit>0;
        if(n==h) i++;
        while(i<n && s[i]==t[i+shift]) i+=;
        return i==n;
        
    }
};