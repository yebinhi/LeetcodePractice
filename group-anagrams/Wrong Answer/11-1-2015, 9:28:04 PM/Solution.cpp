// https://leetcode.com/problems/group-anagrams

class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> res;
        if(strs.size() == 0) return res;
        unordered_map<string, int> map;
        for(int i=0; i<strs.size();i++){
            string temp=strs[i];
            sort(temp.begin(), temp.end());
            if(map.find(temp) != map.end()){
                res[map[temp]].push_back(strs[i]);
            }else{
                map[temp]=map.size()-1;
                res.push_back(vector<string>({strs[i]}));
            }
        }
        return res;
    }
};