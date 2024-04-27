// https://leetcode.com/problems/longest-palindromic-substring

class Solution {
public:
    string longestPalindrome(string s) {
        int n=s.size();
        if(n<=0) return NULL;
        bool isPal[1000][1000];
        int maxSum=1, start=0;
        for(int i=0; i<n; i++){
            for(int j=0; j<n; j++){
                isPal[i][j]= s[i]==s[j] && (i-j<2 || isPal[i+1][j-1]);
                if(isPal[i][j] && maxSum<i-j+1){
                    maxSum=i-j+1;
                    start=j;
                }
            }
            isPal[i][i]=true;
        }
        return s.substr(start, maxSum);
    }
};