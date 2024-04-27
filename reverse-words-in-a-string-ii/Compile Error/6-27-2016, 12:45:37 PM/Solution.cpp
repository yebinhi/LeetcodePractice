// https://leetcode.com/problems/reverse-words-in-a-string-ii

class Solution {
public:
    void reverseWords(string &s) {
        int n=s.size(), start=0;
        if(n<=0) return;
        reverseStr(s, 0, n-1);
        for(int i=0; i<n; i++){
            if(s[i]== ' ' || i==n-1){
                reverseStr(s,start, i-1);
                start=i+1;
            }
        }
    }
    
    void reverseStr(string &s, int begin, int end){
        while(begin<end){
            temp=s[begin];
            s[begin]=s[end];
            s[end]=temp;
            begin++;
            end--;
        }
        
    }
};