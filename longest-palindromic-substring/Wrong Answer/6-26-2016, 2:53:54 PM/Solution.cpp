// https://leetcode.com/problems/longest-palindromic-substring

class Solution {
public:
    string longestPalindrome(string s) {
        int n=s.size();
        int star=0, end=0, lm=0;
        for(int i=0; i<n;i++){
            int l1=extendCenter(s, i, i);
            int l2=extendCenter(s, i, i+1);
            int l=max(l1, l2);
            if(l>lm){
                lm=l;
                star=i-(l-1)/2;
            }
            
        }
        return s.substr(star, lm+1);
        
    }
    
    int extendCenter(string s, int sta, int end){
        int i=sta, j=end;
        while(i>=0 && j<end && s[i]==s[j]){
            i--;
            j++;
        }
        return j-i-1;
    }
};