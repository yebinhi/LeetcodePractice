// https://leetcode.com/problems/one-edit-distance

class Solution {
public:
    bool isOneEditDistance(string s, string t) {
        int n=s.size(), h=t.size(), shfit=h-n, i=0;
        if(n>h) return isOneEditDistance(t, s);
        if(h-n >1) return false;
        while(i<n && s[i]==t[i]) i++;
        if(i==n) return shfit>0;
        if(n==h) i++;
        while(i<n && s[i]==t[i+shfit]) i++;
        return i==n;
        
        
        

    }
};