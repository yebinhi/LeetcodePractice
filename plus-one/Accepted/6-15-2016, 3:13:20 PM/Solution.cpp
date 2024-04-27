// https://leetcode.com/problems/plus-one

class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int plus=1;
        for(auto p=digits.rbegin(); p != digits.rend(); p++){
            int temp=*p+plus;
            *p=temp%10;
            plus=temp/10;
            if(plus == 0) break;
        }
        if(plus) digits.insert(digits.begin(), plus);
        return digits;
    }
};