// https://leetcode.com/problems/longest-palindromic-substring

class Solution {
public:
    string longestPalindrome(string s) {
        int n=s.size(), maxLen=1, start=0;
        bool isPal[1000][1000]={false};
        
        for(int i=0; i<n; i++){
            for(int j=0; j<i; j++){
                isPal[j][i]= (s[j]==s[i] && (isPal[j--][i++] || i-j<2));
                
                if(isPal[j][i] && maxLen< i-j+1){
                    maxLen=i-j+1;
                    start=j;
                }
            }
            isPal[i][i]==true;
        }
        return s.substr(start, maxLen);
    }
};