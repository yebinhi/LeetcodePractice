// https://leetcode.com/problems/word-pattern

class Solution {
public:
    bool wordPattern(string pattern, string str) {
        istringstream iss(str);
        unordered_map<string, char> hmap;
        char chars[26] = { 0 };
        int pos(0);
        
        while(getline(iss, str, ' ')){
            if(pos >= pattern.length()) return false;
            if(hmap.count(str)){
                if(hmap[str] != pattern[pos]) return false;
            }else{
                if(chars[pattern[pos] - 'a'] == 1) return false;
                hmap[str] = pattern[pos];
                chars[pattern[pos] - 'a'] = 1;
            }
            pos++;
        }
        return pos == pattern.length();
    }
};