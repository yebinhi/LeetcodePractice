// https://leetcode.com/problems/longest-substring-with-at-most-two-distinct-characters

class Solution {
public:
    int lengthOfLongestSubstringTwoDistinct(string s) {
        int n=s.size(), maxLen=0, numDistinct=0, k=0;
        if(n<=0) return 0;
        
        vector<int> count(256, 0);
        for(int i=0; i<n;i++){
            if(count[s[i]] == 0) numDistinct++;
            count[s[i]]++;
            while(numDistinct >2){
                count[s[i]]--;
                if(count[s[i]] == 0) numDistinct--;
                k++;
            }
            
            maxLen=max(i-k+1, maxLen);
        }
        return maxLen;
    }
};