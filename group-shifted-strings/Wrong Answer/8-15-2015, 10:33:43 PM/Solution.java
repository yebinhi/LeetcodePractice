// https://leetcode.com/problems/group-shifted-strings

public class Solution {
    public List<List<String>> groupStrings(String[] strings) {
        List<List<String>> result = new ArrayList<List<String>>();
        Map<String, List<String>> map = new HashMap<String, List<String>>();
        for(int i =0; i<strings.length; i++){
            String key = getKey(strings[i]);
            if(map.containsKey(key)){
                map.get(key).add(strings[i]);
            }else{
                List<String> tem = new ArrayList<String>();
                tem.add(strings[i]);
                map.put(key, tem);
            }
        }
        for(String k : map.keySet()){
            result.add(map.get(k));
        }
        return result;
    }
    
    private String getKey(String s){
        int len = s.length();
        int offset = s.charAt(0)-'a';
        String key ="";
        for(int i =1; i<len; i++){
            char temp = (char)(s.charAt(i)-offset);
            if(temp < 'a'){
                temp +=26;
            }
            key += temp;
        }
        return key;
    }
}