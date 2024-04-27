// https://leetcode.com/problems/reorder-data-in-log-files

class Solution {
    public String[] reorderLogFiles(String[] logs) {
        
        List<String> digitLogs = new ArrayList<>();
        SortedSet<String> letterLogs = new TreeSet<>(
            new Comparator<String>(){
                public int compare(String s1, String s2){
                    String s1Sub = s1.substring(s1.indexOf(" ")+1);
                    String s2Sub = s2.substring(s2.indexOf(" ")+1);
                    return s1Sub.equals(s2Sub)? s1.compareTo(s2):s1Sub.compareTo(s2Sub);
                }
            }
        );
        
        for(String log : logs){
            Character c = log.charAt(log.indexOf(" ")+1);
            if(Character.isDigit(c)){
                digitLogs.add(log);
            }else{
                letterLogs.add(log);
            }
        }
        
        return Stream.concat(letterLogs.stream(), digitLogs.stream()).toArray(s->new String[s]);
    }
}