// https://leetcode.com/problems/integer-to-roman

class Solution {
public:
    string intToRoman(int num) {
        string dict[13]={"M","CM","D","CD","C","XC","L","XL","X","IX","V","IV","I"};
        int val[13] = {1000,900,500,400,100,90,50,40,10,9,5,4,1};
        string res;
        int i=0;
        while(num > 0){
            int k = num/val[i];
            for(int j=0; j<k; j++){
                res.append(dict[i]);
                num-=val[i];
            }
            i++;
        }
        return res;
    }
};