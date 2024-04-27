// https://leetcode.com/problems/one-edit-distance

class Solution {
public:
    bool isOneEditDistance(string s, string t) {
        int len1=s.size(), len2=t.size();
        if(len1>len2) isOneEditDistance(t, s);
        if(len2-len1>1) return false;
        int i=0, shift=len2-len1;
        while(i<len1 && s[i]==t[i]) i++;
        if(i==len1) return shift>0;
        if(shift==0) i++;
        while(1<len1 && s[i]==s[i+shift]) i++;
        return i==len1;
    }
};