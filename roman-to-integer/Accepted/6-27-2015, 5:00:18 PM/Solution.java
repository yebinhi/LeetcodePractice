// https://leetcode.com/problems/roman-to-integer

public class Solution {
	
	public int romanToInt(String s) {
        
		if(s.length()==0){
			throw new NumberFormatException("an empty string does not define a roman numeral");
		}
		
		
		
		int i=0;
		int arabic=0;
		s=s.toUpperCase();
		
		while(i<s.length()){
			char letter = s.charAt(i);
			int number = singleRomantoInt(letter);
			
			if(number < 0){
				throw new NumberFormatException("ILLEGALL Character");
			}
			
			i++;
			if(i==s.length()){
				arabic+=number;
			}else{
				int nextNumber = singleRomantoInt(s.charAt(i));
				if(nextNumber>number){
					arabic += (nextNumber-number);
					i++;
				}else{
					arabic += number;
				}
			}
		}
		
		if (arabic >3999){
			throw new NumberFormatException("roman number must have value 3999 or less.");
		}
		
		
		return arabic;
	    
	        
	    }
	
	public int singleRomantoInt(char number){
		//int temp=0;
		switch(number){
		case 'I':
			return 1;
		case 'V':
			return 5;
		case 'X':
			return 10;
		case 'L':
			return 50;
		case 'C':
			return 100;
		case 'D':
			return 500;
		case 'M':
			return 1000;
		default: return -1;
		}
		
		
		
	}

}