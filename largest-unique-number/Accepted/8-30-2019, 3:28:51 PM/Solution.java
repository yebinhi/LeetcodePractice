// https://leetcode.com/problems/largest-unique-number

class Solution {
    public int largestUniqueNumber(int[] A) {
        Map<Integer, Integer> map = new TreeMap<>(Collections.reverseOrder());
        for(int a:A){
            if(map.containsKey(a)){
                map.put(a, map.get(a)+1);
                continue;
            }
            map.put(a, 1);
        }
        
        for(Integer key: map.keySet()){
            if(map.get(key) == 1){
                return key;
            }
        }
        return -1;
    }
}