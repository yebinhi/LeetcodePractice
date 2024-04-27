// https://leetcode.com/problems/longest-substring-with-at-most-k-distinct-characters

class Solution {
public:
    int lengthOfLongestSubstringKDistinct(string s, int k) {
        int n=s.size();
        if(n<=0) return 0;
        int maxL=0, start=0, count=0;
        vector<int> map(256, 0);
        for(int i=0; i<n; i++){
            if(map[s[i]] == 0) count++;
            map[s[i]]++;
            
            while(count>k){
                map[s[start]]--;
                if(map[s[start]]==0) count--;
                start++;
            }
            maxL= max(maxL, i-start+1);
            
        }
        return maxL;
        
    }
};