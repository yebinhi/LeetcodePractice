// https://leetcode.com/problems/most-common-word

class Solution {
    public String mostCommonWord(String paragraph, String[] banned) {
        Map<String, Integer> map = new HashMap<>();
        String[] strList = paragraph.split(" ");
        for(int i=0; i<strList.length; i++){
            String temp = trim(strList[i]);
            if(!isBanned(temp, banned)){
                if(map.containsKey(temp)){
                    map.put(temp, map.get(temp)+1);
                }else{
                    map.put(temp, 1);
                }
            }
        }
        String result=null;
        int max = 0;
        for(Map.Entry me : map.entrySet()){
            if((Integer)me.getValue() > max){
                result = (String)me.getKey();
                max = (Integer)me.getValue();
            }
        }
        return result;
        
    }
    
    private String trim(String str){
        int s=0, e=str.length()-1;
        while(!Character.isLetter(str.charAt(s))) s++;
        while(!Character.isLetter(str.charAt(e))) e--;
        return str.substring(s,e+1).toLowerCase();
    }
    
    private boolean isBanned(String str, String[] banned){
        boolean res;
        for(int i=0; i<banned.length; i++){
            if(str.equals(banned[i])){
                return true;
            }
        }
        return false;
    }
}