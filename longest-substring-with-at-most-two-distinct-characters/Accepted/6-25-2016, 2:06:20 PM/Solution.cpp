// https://leetcode.com/problems/longest-substring-with-at-most-two-distinct-characters

class Solution {
public:
    int lengthOfLongestSubstringTwoDistinct(string s) {
        int n=s.size(), maxLen=0, number=0, j=0;
        if(n<=0) return 0;
        
        vector<int> count(256,0);
        for(int i=0; i<n; i++){
            if(count[s[i]]==0) number++;
            while(number>2){
               count[s[j]]--;
               if(count[s[j]]==0) number--;
               j++;
            }
            
            count[s[i]]++;
            maxLen=max(maxLen, i-j+1);
        }
        return maxLen;
    }
};