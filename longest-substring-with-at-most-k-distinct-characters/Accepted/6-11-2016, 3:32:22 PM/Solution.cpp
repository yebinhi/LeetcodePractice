// https://leetcode.com/problems/longest-substring-with-at-most-k-distinct-characters

class Solution {
public:
    int lengthOfLongestSubstringKDistinct(string s, int k) {
        int len=s.size();
        if(len<=0) return 0;
        
        int start=0, num=0, maxlen=0;
        vector<int> count(256,0);
        for(int i=0; i<len; i++){
            if(count[s[i]]==0) num++;
            count[s[i]]++;
            while(num>k){
                count[s[start]]--;
                if(count[s[start]]==0) num--;
                start++;
            }
            maxlen=max(maxlen, i-start+1);
        }
        return maxlen;
    }
};