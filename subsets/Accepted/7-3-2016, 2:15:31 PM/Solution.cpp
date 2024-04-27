// https://leetcode.com/problems/subsets

class Solution {
public:
    vector<vector<int>> res;
    vector<vector<int>> subsets(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        vector<int> tmpres;
        dfs(nums, 0, tmpres);
        return res;
    }
    void dfs(vector<int> &nums, int iend, vector<int> &tmpres){
        if(iend == nums.size()) {res.push_back(tmpres); return;}
        tmpres.push_back(nums[iend]);
        dfs(nums, iend+1, tmpres);
        tmpres.pop_back();
        dfs(nums, iend+1, tmpres);
    }
};