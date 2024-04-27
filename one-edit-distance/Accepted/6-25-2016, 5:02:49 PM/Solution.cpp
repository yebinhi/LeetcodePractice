// https://leetcode.com/problems/one-edit-distance

class Solution {
public:
    bool isOneEditDistance(string s, string t) {
        int m=s.size(), n=t.size(), shift=n-m, i=0;
        if(m>n) return isOneEditDistance(t, s);
        if(shift > 1) return false;
        while(i<m && s[i] == t[i]) i++;
        if(i==m) return shift>0;
        if(shift==0) i++;
        while(i<m && s[i] == t[i+shift]) i++;
        return i == m;
    }
};