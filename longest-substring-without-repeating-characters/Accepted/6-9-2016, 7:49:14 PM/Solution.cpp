// https://leetcode.com/problems/longest-substring-without-repeating-characters

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int i=s.size();
        if(i<=0){
            return 0;
        }
        
        vector<int> map(256, -1);
        int start=0, maxx=0;
        for(int end=0; end<i; end++){
            if(map[s[end]]>=start){
                maxx=max(maxx, end-start);
                start=map[s[end]]+1;
            }
            map[s[end]]=end;
        }
        return max(maxx, i-start);
    }
};