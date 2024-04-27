// https://leetcode.com/problems/longest-common-prefix

class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int n= strs.size();
        string res="";
        if(n<=0) return res;
        
        for(int i=0; i<strs[0].size(); i++){
            char c=strs[0][i];
            for(int j=0; j<n; j++){
                if(strs[j][i] != c || strs[j][i] == '\0') return res;
            }
            res.push_back(c);
        }
        return res;
    }
};