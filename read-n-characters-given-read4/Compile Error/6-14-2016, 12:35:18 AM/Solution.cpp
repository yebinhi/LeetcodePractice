// https://leetcode.com/problems/read-n-characters-given-read4

// Forward declaration of the read4 API.
int read4(char *buf);

class Solution {
public:
    /**
     * @param buf Destination buffer
     * @param n   Maximum number of characters to read
     * @return    The number of characters read
     */
    int read(char *buf, int n) {
        if(n<=0) return n;
        
        char* buffer = new char[4];
        int total=0;
        
        while(total<n){
            int bytes=read4(buffer);
            int sz=min(bytes, n-total);
            memcpy(buf+total, buffer, sz);
            total+=sz;
        }
        return total

        
    }
};