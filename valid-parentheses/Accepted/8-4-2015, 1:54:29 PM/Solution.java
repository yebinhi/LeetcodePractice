// https://leetcode.com/problems/valid-parentheses

public class Solution {
    public boolean isValid(String s) {
        if(s == null || s.length() == 0){
            return false;
        }
        
        Stack<Character> stack = new Stack<Character>();
        for(int i =0; i < s.length();i++){
            char c = s.charAt(i);
            if(stack.isEmpty()){
                stack.push(c);
                continue;
            }else if (c == getPair(stack.peek())){
                stack.pop();
                continue;
            }
            stack.push(c);
        }
        return stack.isEmpty();
        
    }
    public char getPair(char c){
        if(c == '('){
            return ')';
        }else if(c == '{'){
            return '}';
        }else if(c == '['){
            return ']';
        }
        return ' ';
    }
}