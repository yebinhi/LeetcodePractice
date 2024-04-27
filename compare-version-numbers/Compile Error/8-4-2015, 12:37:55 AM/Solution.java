// https://leetcode.com/problems/compare-version-numbers

public class Solution {
    public int compareVersion(String version1, String version2) {
        String[] arr1 = version1.split("\\.");
        String[] arr2 = version2.split("\\.");
        
        int i =0;
        while(i<arr1.length || i<arr2.length){
            if(i<arr1.length && i<arr2.length){
                if(arr1[i] > arr2[i]){
                    return 1;
                }else if(arr1[i] > arr2[i]){
                    return -1;
                }
            }else if(i<arr1.length){
                if(arr1[i] != 0){
                    return 1;
                }else{
                    return 0;
                }
            }else if(i<arr2.length){
                if(arr2[i] != 0){
                    return -1;
                }else {
                    return 0;
                }
            }
        }
    }
}