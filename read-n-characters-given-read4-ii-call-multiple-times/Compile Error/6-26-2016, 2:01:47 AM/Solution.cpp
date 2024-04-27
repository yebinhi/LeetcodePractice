// https://leetcode.com/problems/read-n-characters-given-read4-ii-call-multiple-times

// Forward declaration of the read4 API.
int read4(char *buf);

class Solution {
public:
    /**
     * @param buf Destination buffer
     * @param n   Maximum number of characters to read
     * @return    The number of characters read
     */
     char bytes[4];
     int offset=0, buffsize=0;
    int read(char *buf, int n) {
        int readBytes =0;
        bool flag=true;
        while(readBytes<n && flag){
            int sz = bufsize > 0 ? bufsize : read4(bytes);
            if(buffsize == 0 && sz < 4) flag = false;
            int bytes= min(sz, n-readbytes);
            memcpy(buf+readBytes, bytes, bytes);
            readBytes+=bytes;
        }
        return readBytes
    }
};