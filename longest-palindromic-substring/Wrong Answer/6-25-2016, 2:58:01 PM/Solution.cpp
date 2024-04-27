// https://leetcode.com/problems/longest-palindromic-substring

class Solution {
public:
    string longestPalindrome(string s) {
        int n=s.size();
        if(n<=1) return s;
        string max;
        for(int i=0; i<s.size(); i++){
            for(int j=i; j<s.size(); j++){
                string temp=s.substr(i, j-i);
                if(isPalindrome(temp)){
                    if(temp.size()>max.size()) max = temp;
                }
            }
        }
        return max;
    }
    bool isPalindrome(string subs){
        int start=0, end=subs.size()-1;
        while(start<end){
            if(subs[start] != subs[end]) return false;
            start++;
            end--;
        }
        return true;
    }
};