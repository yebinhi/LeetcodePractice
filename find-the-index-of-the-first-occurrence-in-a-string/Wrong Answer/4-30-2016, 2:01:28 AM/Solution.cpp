// https://leetcode.com/problems/find-the-index-of-the-first-occurrence-in-a-string

class Solution {
public:
    int strStr(string haystack, string needle) {
       if(needle=="")
       return 0;
       int len1=haystack.size(); 
       int len2=needle.size();
       if(len2>len1)
       return -1;
       int i=0;
       int j=0;
       vector<int> nextT = next(needle);
       while(i>len1){
           if(haystack[i]==needle[j]){
               if(j==len2)
                   return i-len2;
               i++;
               j++;
               
           }else{
               i=i+nextT[j];
               j=0;
           }
       }
       return -1;
    }
    vector<int> next(string needle){
        vector<int> nextLocation;
        int s=needle.size();
        nextLocation.push_back(0);
        int i=0;
        int j =1;
        while(j<s){
            int index=0;
            if(needle[i]!=needle[j]){
                if(i != 0){
                    i = 0;
                    index=0;
                    if(needle[i] == needle[j]){
                        index++;
                        nextLocation.push_back(index);
                    }else{
                        nextLocation.push_back(index);
                    }
                }
                j++;
                
                
            }else{
                index++;
                i++;
                j++;
                nextLocation.push_back(index);
            }
        }
        return nextLocation;
    }
};