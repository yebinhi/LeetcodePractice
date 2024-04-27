// https://leetcode.com/problems/reverse-integer

class Solution {
public:
    int reverse(int x) {
        int res=0;
        while(x !=0){
            res=res*10+x%10;
            x=x/10;
        }
        return res;
    }
};