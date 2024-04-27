// https://leetcode.com/problems/one-edit-distance

class Solution {
public:
    bool isOneEditDistance(string s, string t) {
        int m=s.size(), n=t.size();
        if(m>n) isOneEditDistance(t, s);
        if(n-m >1) return false;
        int shift=n-m, i=0;
        while(i<m && s[i] == t[i]) i++;
        if(i == m) return shift>0;
        if(shift == 0) i++;
        while(i<m && s[i] == t[i]) i++;
        return i==m;
    }
};