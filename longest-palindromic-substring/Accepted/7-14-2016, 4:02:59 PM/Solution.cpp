// https://leetcode.com/problems/longest-palindromic-substring

class Solution {
public:
    string longestPalindrome(string s) {
        int n=s.size();
        if(n<=0) return NULL;
        
        bool isPal[1000][1000];
        int start=0, maxSum=1;
        for(int i=n-1; i>=0; i--){
            for(int j=i; j<n; j++){
                isPal[i][j]=(s[i]==s[j] && (i+1 >j-1 || isPal[i+1][j-1]));
                if(j-i+1 >maxSum && isPal[i][j]){
                    maxSum=j-i+1;
                    start=i;
                }
            }
        }
        return s.substr(start, maxSum);
    }
};