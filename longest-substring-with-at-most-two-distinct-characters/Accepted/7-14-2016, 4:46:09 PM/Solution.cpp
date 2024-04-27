// https://leetcode.com/problems/longest-substring-with-at-most-two-distinct-characters

class Solution {
public:
    int lengthOfLongestSubstringTwoDistinct(string s) {
        int n=s.size();
        if(n<=0) return 0;
        
        vector<int> count(256, 0);
        int maxSum=0, distinct=0, start=0;
        for(int i=0; i<n; i++){
            if(count[s[i]]==0) distinct++;
            
            while(distinct>2){
                count[s[start]]--;
                if(count[s[start]] == 0) distinct--;
                start++;
            }
            count[s[i]]++;
            maxSum= max(maxSum, i-start+1);
        }
        return maxSum;
    }
};