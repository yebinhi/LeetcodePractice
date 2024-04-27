// https://leetcode.com/problems/longest-substring-without-repeating-characters

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n=s.size();
        if(n<=0) return 0;
        vector<int> count(32, -1);
        int maxSum=0;
        for(int i=0; i<n; i++){
            int index=count[i];
            if(index != -1){
                maxSum=max(maxSum, i-index);
            }else{
                count[s[i]]=i;
            }
        }
        return maxSum;
    }
};