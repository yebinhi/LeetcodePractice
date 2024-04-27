// https://leetcode.com/problems/decode-ways

public class Solution {
    public int numDecodings(String s) {
  
   int[] numbers = new int[s.length()];
   for(int i=0; i<s.length(); i++){
	   numbers[i]=s.charAt(i);
   }
   
   int count=1;;
   int temp=1;
   int i=0;
   while(i<numbers.length){
	   if((numbers[i]*10+numbers[i])<=26){
		   count++;
		   i+=2;
	   }else{
		   i++;
		   temp=temp*count;
	   }
   }
   

    
    
    
    return temp;
}
}