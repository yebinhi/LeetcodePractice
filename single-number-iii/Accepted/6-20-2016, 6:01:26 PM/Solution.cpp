// https://leetcode.com/problems/single-number-iii

class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        int len=nums.size();
        int AxorB=0;
        
        for(auto x : nums){ 
            AxorB^=x;
        }
        
        int mask = AxorB & (~(AxorB-1));
        int A=0, B=0;
        
        for(auto x:nums){
            if((x & mask) == 0){
                A^=x;
            }else{
                B^=x;
            }
        }
        
        return vector<int>({A, B});
    }
};