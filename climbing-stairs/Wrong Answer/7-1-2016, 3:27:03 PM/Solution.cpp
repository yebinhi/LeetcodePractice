// https://leetcode.com/problems/climbing-stairs

class Solution {
public:
    int climbStairs(int n) {
        if(n==0) return 0;
        
        int num[n];
        num[0]=1;
        num[1]=2;
        for(int i=2; i<=n; i++){
            num[i]=num[i-1]+num[i-2];
        }
        return num[n];
    }
};