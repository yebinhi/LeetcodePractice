// https://leetcode.com/problems/reverse-words-in-a-string

class Solution {
public:
    void reverseWords(string &s) {
        string& rs;
        int len=s.size();
        if(len<=0) return rs;
        int j=len;
        for(int i=len-1; i>=0; i-- ){
            if(s[i]== " "){
                j=i;
            }else if(s[i-1] == " " || i == 0){
                if(rs.size() != 0) rs.append( " ");
                
                rs.append(s.substr(i, j-i));
            }
        }
        s=rs;

    }
};