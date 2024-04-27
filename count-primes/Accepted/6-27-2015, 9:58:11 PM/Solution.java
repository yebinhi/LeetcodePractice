// https://leetcode.com/problems/count-primes

public class Solution {
    public int countPrimes(int n) {
 
	if(n<=2){
		return 0;
	}
	
	boolean[] tracker= new boolean[n+1];
	int count=0;
	for(int i=2; i<tracker.length;i++){
		tracker[i]=true;
	}
	
	for(int i=2; i<Math.sqrt(n); i++){
		if(tracker[i]){
			for(int j=i+i;j<n;j=j+i){
				tracker[j]=false;
			}
		}
	}
	
	for(int i=2;i<n;i++){
		if(tracker[i]){
			count++;
		}
	}
	
	return count;
}
}