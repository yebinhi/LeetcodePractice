// https://leetcode.com/problems/string-to-integer-atoi

class Solution {
public:
    int myAtoi(string str) {
        int end=str.size(), start=0, res=0, flag=0;
        if(end<=0) return 0;
        end--;
        while(str[end] == ' '){
            end--;
        }
        while(start<end){
            if(str[start] == ' ') start++;
            if(str[start] == '+' ) start++;
            if(str[start] == '-'){
                start++;
                flag=1;
            }
        }
        while(end>=0){
            if(res> INT_MAX/10){
                return INT_MAX;
            }else{
            res=res*10 + (str[start]-'0');
            }
        }
        if(flag == 1) res=res*(-1);
        return res;
    }
};