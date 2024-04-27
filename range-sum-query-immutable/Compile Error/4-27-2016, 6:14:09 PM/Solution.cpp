// https://leetcode.com/problems/range-sum-query-immutable

class NumArray {
private:
   vector<int>& array; 
public:
    NumArray(vector<int> &nums) {
        array=nums;
    }

    int sumRange(int i, int j) {
        int result=0;
        for(int x=i; x<j;x++){
            result+=nums[x];
        }
        return result;
    }
};


// Your NumArray object will be instantiated and called as such:
// NumArray numArray(nums);
// numArray.sumRange(0, 1);
// numArray.sumRange(1, 2);