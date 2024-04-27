// https://leetcode.com/problems/longest-palindromic-substring

class Solution {
public:
    string longestPalindrome(string s) {
        
    int len=s.size();
        int start=0, lenm=0;
        for(int i=0; i<len; i++){
            int len1=expendCenter(s,i,i);
            int len2=expendCenter(s,i,i+1);
            int lenmax=max(len1,len2);
            if(lenm<lenmax){
                start=i-(lenmax-1)/2;
                lenm=lenmax;
            }
        }
        return s.substr(start, lenm);
    }
    
    int expendCenter(string s, int left, int right){
        int L=left, R=right;
        while(L>=0 && R<s.size() && s[L]==s[R]){
            L--;
            R++;
        }
        return R-L-1;
    }
};