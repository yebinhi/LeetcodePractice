// https://leetcode.com/problems/remove-vowels-from-a-string

class Solution {
    public String removeVowels(String S) {
        StringBuilder sb = new StringBuilder();
        for(int i=0; i<S.length(); i++){
            char letter = S.charAt(i);
            if( letter == 'a' || letter == 'e' || letter == 'i' || letter == 'o' || letter == 'u'){
                continue;
            }
            sb.append(letter);
        }
        return sb.toString();
    }
}