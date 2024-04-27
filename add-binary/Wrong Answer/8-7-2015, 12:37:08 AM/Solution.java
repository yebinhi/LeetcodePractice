// https://leetcode.com/problems/add-binary

public class Solution {
    public String addBinary(String a, String b) {
        int lenA = a.length();
        int lenB = b.length();
        int i = lenA-1;
        int j = lenB-1;
        int carry=0;
        StringBuilder sb = new StringBuilder();
        int result =0;
        while(i>=0 || j>=0 || carry !=0){
            result = getBit(a, i)+getBit(b, j);
            switch(result){
                case 0:
                    carry =0;
                    sb.append("0");
                    break;
                case 1:
                    carry =0;
                    sb.append("1");
                    break;
                case 2:
                    carry =1;
                    sb.append("0");
                    break;
            }
            i--;
            j--;
        }
        return sb.toString();
    }
    
    public int getBit(String a, int i){
        if(i<0){
            return 0;
        }else{
            return (int)a.charAt(i);
        }
    }
}