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
        int total=0;
        bool flag=false;
        char* buffer = new char[4];
        while(!flag && total<n){
            int sz=read4(buffer);
            if(sz<4) flag=true;
            int bytes=min(n-total, sz);
            memcpy(buf+total, buffer, bytes);
            total+=bytes;
        }
        return total;
    }
};