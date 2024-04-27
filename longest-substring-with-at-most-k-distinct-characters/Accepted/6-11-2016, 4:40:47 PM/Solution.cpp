// https://leetcode.com/problems/longest-substring-with-at-most-k-distinct-characters

class Solution {
public:
    int lengthOfLongestSubstringKDistinct(string s, int k) {
        int len=s.size();
        if(len<=0) return 0;
        
        vector<int> map(256,0);
        int start=0, count=0, maxlen=0;
        for(int i=0; i<len; i++){
            if(map[s[i]]==0) count++;
            map[s[i]]++;
            
            while(count>k){
                map[s[start]]--;
                if(map[s[start]]==0) count--;
                start++;
            }
            
            maxlen=max(maxlen, i-start+1);
        }
        return maxlen;
    }
};