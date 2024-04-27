// https://leetcode.com/problems/group-shifted-strings

public class Solution {
    public List<List<String>> groupStrings(String[] strings) {
        List<List<String>> result = new ArrayList<List<String>>();
        Map<Integer, List<String>> map = new HashMap<Integer, List<String>>();
        for(int i =0; i<strings.length; i++){
            int key = getKey(strings[i]);
            if(map.containsKey(key)){
                map.get(key).add(strings[i]);
            }
            List<String> tem = new ArrayList<String>();
            tem.add(strings[i]);
            map.put(key, tem);
        }
        for(int k : map.keySet()){
            result.add(map.get(k));
        }
        return result;
    }
    
    private int getKey(String s){
        int len = s.length();
        if(len == 0) return -1;
        if(len == 1) return 1;
        int key =0;
        for(int i =1; i<len; i++){
            int temp = (int)(s.charAt(i)-s.charAt(i-1));
            if(temp < 0){
                temp +=26;
            }
            key += temp;
        }
        return key;
    }
}