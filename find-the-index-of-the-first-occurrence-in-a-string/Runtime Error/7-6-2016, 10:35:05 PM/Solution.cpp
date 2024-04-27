// https://leetcode.com/problems/find-the-index-of-the-first-occurrence-in-a-string

class Solution {
public:
    int strStr(string haystack, string needle) {
        int n=needle.size();
        if(n<=0) return 0;
        int h=haystack.size();
        if(h<=0) return -1;
        
        int i=-1, j=0;
        vector<int> next(n, 0);
        next[0]=-1;
        while(j<n){
            if(i==-1 ||needle[j]==needle[i]){
                i++; j++;
                next[j]=i;
            }else{
                i=next[i];
            }
        }
        
        i=0;j=0;
        while(i<h && j<n){
            if(needle[i] != needle[j]){
                j=next[j];
                if(j==-1){
                    j++;i++;
                }
            }else{
                i++;
                j++;
                if(j==n) return i-j;
            }
        }
        return -1;
    }
};