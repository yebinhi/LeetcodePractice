// https://leetcode.com/problems/combination-sum

class Solution {
public:
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> res;
        vector<int> sol;
        int n=candidates.size();
        if(n<=0) return res;
        
        sort(candidates.begin(), candidates.end());
        findComSum(candidates, res, sol, 0, target);
        return res;
        
    }
    void findComSum(vector<int>& candidates,
                    vector<vector<int>>& res,
                    vector<int>& sol,
                    int start,
                    int target){
                        
        if(target == 0) {  
            res.push_back(sol);
            return;
        }
        
        for(int i=start; i<candidates.size(); i++){
            if(i >start && candidates[i]==candidates[i-1]) continue;
            if(candidates[i]<=target){
                sol.push_back(candidates[i]);
                findComSum(candidates, res, sol, i, target-candidates[i]);
                sol.pop_back();
            }
            
        }
                        
    }
};