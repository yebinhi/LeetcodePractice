// https://leetcode.com/problems/find-the-index-of-the-first-occurrence-in-a-string

class Solution {
public:
    int strStr(string haystack, string needle) {
        int h=haystack.size(), n=needle.size();
        if(n==0) return 0;
        if(n>h) return -1;
        vector<int> next = generateTable(needle);
        int k=0;
        for(int i=0; i<h; i++){
            while(k>0 && haystack[i] != needle[k]) k=next[k-1];
            if(haystack[i] == needle[k]) k++;
            if(k== n) return i-needle.size()+1;
        }
        return -1;
    }
    
    vector<int> generateTable(string needle){
        int len=needle.size();
        vector<int> next(len,0);
        int k=0;
        for(int i=0; i<len; i++){
           while(k>0 && needle[k] != needle[i]) k=next[k-1];
           if(needle[k] == needle[i]) next[i]= ++k;
       }
       return next;
    }
};