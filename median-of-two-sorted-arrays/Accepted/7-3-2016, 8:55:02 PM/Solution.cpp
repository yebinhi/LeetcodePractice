// https://leetcode.com/problems/median-of-two-sorted-arrays

class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
         int m=nums1.size();
         int n=nums2.size();
         if(m<=0 && n<=0) return 0;
         double mid=0;
         vector<int> all(m+n);
         merge(nums1.begin(), nums1.end(), nums2.begin(), nums2.end(), all.begin());
         sort(all.begin(), all.end());
         int size=all.size();
         if((size%2)!=0){
             mid=all[size/2];
         }else{
             mid=(all[size/2-1]+all[size/2])/2.0;
         }
         return mid;
    }
};