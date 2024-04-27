// https://leetcode.com/problems/palindrome-permutation

class Solution {
    public boolean canPermutePalindrome(String s) {
        Map<Character, Integer> map = new HashMap<>();
        for(int i=0; i<s.length(); i++){
            if(map.containsKey(s.charAt(i))){
                map.put(s.charAt(i), map.get(s.charAt(i))+1);
            }else{
                map.put(s.charAt(i), 1);
            }
        }
        int odd=0;
        for(Map.Entry mapElement : map.entrySet()){
            int i = (int)mapElement.getValue();
            if(i%2!=0){
                odd++;
            }
        }
        return odd>1 ? false:true;
    }
}