// https://leetcode.com/problems/jewels-and-stones

class Solution {
    public int numJewelsInStones(String J, String S) {
        int count=0;
        for(int i=0; i<S.length(); i++){
            char s = S.charAt(i);
            for(int j=0; j<J.length(); j++){
                char charJ=J.charAt(j);
                if(s==charJ) count++;
            }
        }
        return count;
    }
}