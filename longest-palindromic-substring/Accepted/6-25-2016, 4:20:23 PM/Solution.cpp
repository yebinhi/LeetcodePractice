// https://leetcode.com/problems/longest-palindromic-substring

class Solution {
public:
    string longestPalindrome(string s) {
        int n=s.size(), start=0, end=0, maxLen=1;;
        if(n<=1) return s;
        
        bool isPal[1000][1000] = {false};
        
        for(int i=0; i<n; i++){
            for(int j=0; j<i; j++){
                isPal[j][i]=(s[j]==s[i] && (i-j<2 || isPal[j+1][i-1]));
                
                if(isPal[j][i] && maxLen < (i-j+1)){
                    maxLen=i-j+1;
                    start=j;
                    end=i;
                }
            }
            isPal[i][i]=true;
        }
        return s.substr(start, end-start+1);
    }
};