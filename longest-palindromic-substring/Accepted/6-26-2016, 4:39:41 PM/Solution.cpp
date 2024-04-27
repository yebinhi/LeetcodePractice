// https://leetcode.com/problems/longest-palindromic-substring

class Solution {
public:
    string longestPalindrome(string s) {
        int n=s.size(), maxlen=1,start=0;
        
        bool isPal[1000][1000]={false};
        
        for(int i=0; i<n; i++){
            for(int j=0; j<i; j++){
                isPal[j][i]=(s[j]==s[i] && (i-j<2 || isPal[j+1][i-1]));
                
                if(isPal[j][i] && maxlen<i-j+1){
                    maxlen=i-j+1;
                    start=j;
                }
            }
            isPal[i][i]=true;
        }
        return s.substr(start, maxlen);
        
    }
};