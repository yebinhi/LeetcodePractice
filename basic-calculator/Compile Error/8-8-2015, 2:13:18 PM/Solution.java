// https://leetcode.com/problems/basic-calculator

public class Solution {
    public int calculate(String s) {
        Stack<Character> stack = new Stack<Character>();
        ArrayList arr;
        for(int i =0; i < s.length(); i++){
            if(s.charAt(i) == ')'){
                arr = new ArrayList<Character>();
                while(!stack.isEmpty()){
                    if(stack.peek == '('){
                        arr.add(stack.pop());
                        break;
                    }
                    arr.add(stack.pop());
                }
                
                stack.push(calculateResult(arr));
            }else{
                stack.push(s.charAt(i));
            }
        }
        arr = new ArrayList<Character>();
        while(!stack.isEmpty){
            arr.add(stack.pop());
        }
        return calculateResult(arr);
    }
    public int calculateResult(ArrayList<Character> arr){
        int len = arr.size();
                int temp=(int)arr[0];
                for(int j =1; j<len; j++){
                    if(arr[j] == '+'){
                        temp = temp + (int)arr[j+1];
                    }else if(arr[j] == '-'){
                        temp = temp -(int)arr[j+1];
                    }
                }
                return temp;
    }
}