// https://leetcode.com/problems/longest-palindromic-substring

class Solution {
public:
    string longestPalindrome(string s) {
        int n=s.size(), maxL=0, start=0;
        if(n<=1) return s;
        bool isPal[1000][1000]={false};
        
        for(int i=0; i<n; i++){
            for(int j=0; j<i; j++){
                isPal[j][i]= (s[j]==s[i] && (i-j<2 || isPal[j+1][i-1]));
                
                if(isPal[j][i] && maxL<i-j+1){
                    maxL=i-j+1;
                    start=j;
                }
            }
            isPal[i][i]=true;
        }
        return s.substr(start, maxL);
    }
};