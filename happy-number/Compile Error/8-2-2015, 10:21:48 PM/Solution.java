// https://leetcode.com/problems/happy-number

public class Solution {
    public boolean isHappy(int n) {
        if(n<0){
            return false;
        }
        Set<Integer> set new HashSet<Integer>();
        set.add(1);
        while(set.add(n)){
            int next = 0;
            while(n > 0){
                int i = n%10;
                next = next + i*i;
                n=n/10;
            }
            n = next;
        }
        return n == 1;
    }
}