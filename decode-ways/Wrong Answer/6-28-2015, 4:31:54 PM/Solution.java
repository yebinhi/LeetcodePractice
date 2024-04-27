// https://leetcode.com/problems/decode-ways

public class Solution {
    public int numDecodings(String s) {
  
   int[] numbers = new int[s.length()];
   char[] chars = s.toCharArray();
   for(int i=0; i<chars.length; i++){
	   numbers[i]=Character.getNumericValue(chars[i]);
   }
   
   if(numbers.length==0) return 0;
   if(numbers[0]==0) return 0;
   if(numbers.length==1 && numbers[0]!=0) return 1;
   if(numbers.length==2){
	   if(numbers[0]*10+numbers[1]>26||numbers[0]*10+numbers[1]==10){
		   return 1;
	   }else{
		   return 2;
	   }
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