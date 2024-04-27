// https://leetcode.com/problems/reverse-words-in-a-string-ii

class Solution {
public:
    void reverseWords(string &s) {
        int n=s.size(), j=0;
        if(n<=0) return;
        reverse(s, 0, n-1);
        for(int i=0; i<n; i++){
            if(s[i]==' ' || i==n){
                reverse(s, j, i-1);
                j=i+1;
            }
        }
        
    }
    void reverse(string &s, int S, int E){
        while(S<E){
            char tmp=s[S];
            s[S]=s[E];
            S[E]=tmp;
            S++; E--;
        }
    }
};