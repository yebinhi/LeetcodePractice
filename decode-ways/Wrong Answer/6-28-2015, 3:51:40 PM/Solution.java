// https://leetcode.com/problems/decode-ways

public class Solution {
    public int numDecodings(String s) {
  if(s.length()==0) return 0;
  if(s=="0") return 0;
  if(s.length()<=2) return 2;
	
   int[] numbers = new int[s.length()];
   char[] chars = s.toCharArray();
   for(int i=0; i<chars.length; i++){
	   numbers[i]=Character.getNumericValue(chars[i]);
   }
   
   int count=1;;
   int temp=1;
   int i=0;
   
   while(true){
	   if((numbers[i]*10+numbers[i+1])<=26){
		   count++;
		   i++;
		   
	   }else{
		   i++;
		   temp=temp*count;
		   count=1;
	   }
	   
	   if(i==numbers.length-1){
		   
		   temp=temp*count;
		   break;
	   }
   }
    
    return temp;
}
}