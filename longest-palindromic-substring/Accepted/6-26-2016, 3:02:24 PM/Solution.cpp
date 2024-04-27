// https://leetcode.com/problems/longest-palindromic-substring

class Solution {
public:
    string longestPalindrome(string s) {
        int n=s.size(), start=0, len=0;
        
        for(int i=0; i<n;i++){
            int l1=expendCenter(s, i, i);
            int l2=expendCenter(s, i, i+1);
            int l=max(l1, l2);
            if(l>len){
                start=i-(l-1)/2;
                len=l;
            }
        }
        return s.substr(start, len);
    }
    int expendCenter(string s, int left, int right){
        int l=left, r=right;
        while(l>=0 && r < s.size() && s[l]==s[r]){
            l--;
            r++;
        }
        return r-l-1;
    }
};