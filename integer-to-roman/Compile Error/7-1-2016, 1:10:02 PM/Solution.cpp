// https://leetcode.com/problems/integer-to-roman

class Solution {
public:
    string intToRoman(int num) {
        string dict[13]={"M","CM","D","CD","C","XC","L","XL","X","IX","V","IV","I"};
        int num[13]={1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1};
        string res;
        for(int i=0; i<13; i++){
            int count= num/dict[i];
            num%=dict[i];
            for(int j=0; j<count; j++){
                res.append(dict[i]);
            }
        }
        return res;
    }
};