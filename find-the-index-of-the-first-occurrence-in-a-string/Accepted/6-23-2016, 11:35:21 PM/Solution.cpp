// https://leetcode.com/problems/find-the-index-of-the-first-occurrence-in-a-string

class Solution {
public:
    int strStr(string haystack, string needle) {
        int h=haystack.size();
        int n=needle.size();
        if(n>h) return -1;
        if(n<=0) return 0;
        
        vector<int> next(n, 0);
        next[0]=-1;
        int k=-1, j=0;
        while(j<n-1){
            if(k==-1 || needle[k] == needle[j]){
                k++;
                j++;
                next[j]=k;
            }else{
                k=next[k];
            }
        }
        
        k=0;
        j=0;
        while(k<h && j<n){
            if(haystack[k] == needle[j]){
                k++;
                j++;
                if(j == n) return k-j;
            }else{
                j=next[j];
                if(j==-1){
                    k++;
                    j++;
                }
            }
        }
        return -1;
    }
};