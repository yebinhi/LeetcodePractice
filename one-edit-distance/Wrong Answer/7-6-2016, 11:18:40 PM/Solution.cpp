// https://leetcode.com/problems/one-edit-distance

class Solution {
public:
    bool isOneEditDistance(string s, string t) {
       int n=s.size(), h=t.size(), shift=h-n, i=0;
       if(n>h) return isOneEditDistance(t, s);
       while(i<n && s[i]==t[i]) i++;
       if(i==n) return shift >0;
       if(n==h) i++;
       while(i<n && s[i]==t[i+shift]) i++;
       return i==n;
    }
};