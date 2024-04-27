// https://leetcode.com/problems/reverse-words-in-a-string

class Solution {
public:
    void reverseWords(string &s) {
        string ret;
        int j=s.size();
        for(int i=j-1; i>=0; i--){
           if(s[i]==' '){
               j=i;
           } else if(i==0 || s[i-1]==' '){
               if(!ret.empty()){
                   ret.append(" ");
               }
               ret.append(i,j-1);
           }
        }
        s=ret;
    }
};