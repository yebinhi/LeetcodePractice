// https://leetcode.com/problems/reverse-words-in-a-string

class Solution {
public:
    void reverseWords(string &s) {
        string ret;
        int j=s.size();
        for(int i=j-1; i>=0; i--){
            if(s[i]==' '){
                j=i;
            }else if(s[i-1]==' ' || i==0){
                if(!ret.empty()) ret.append(" ");
                ret.append(i,j-1);
            }
        }
        s=ret;
    }
};