// https://leetcode.com/problems/generate-parentheses

public class Solution {
    public List<String> generateParenthesis(int n) {
        ArrayList<String> result = new ArrayList<String>();
        if(n == 0){
            return result;
        }
        String item;
        dfs(result,item, n,n);
        return result;
    }
    
    public void dfs(ArrayList<String> result, String item, int left, int right){
        if(left != right){
            return;
        }
        if(left == 0 || right ==0){
            result.add(new String(item));
        }
        if(left > 0){
            dfs(result, "(", left-1, right);
        }
        if(right >0){
            dfs(result, ")", left-1, right-1);
        }
    }
}