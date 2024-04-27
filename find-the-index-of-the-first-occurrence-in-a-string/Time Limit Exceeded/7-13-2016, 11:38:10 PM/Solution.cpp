// https://leetcode.com/problems/find-the-index-of-the-first-occurrence-in-a-string

class Solution {
public:
    int strStr(string haystack, string needle) {
        int h=haystack.size();
        int n=needle.size();
        if(n==0) return 0;
        if(n>h) return -1;
        
        vector<int> next(n, 0);
        next[0]=-1;
        int i=-1, j=0;
        while(j<n-1){
            if(i==-1 || needle[i]==needle[j]){
                i++; j++;
                next[j]=i;
            }else{
                i=next[i];
            }
        }
        
        i=0; j=0;
        while(i<h && j<n){
            if(haystack[i] != needle[j]){
                j=next[j];
                if(j==-1){
                    i++; j++;
                }else{
                    i++; j++;
                    if(j==n) return i-j;
                }
            }
        }
        return -1;
    }
};