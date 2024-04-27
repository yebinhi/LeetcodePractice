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
        int total=0;
        bool flag=true;
        while(flag && total<n){
            int readbytes = (buffsize==0)? read4(bytes) : buffsize;
            if(readbytes <4 && buffsize==0) flag = false;
            int sz = min(n-total, readbytes);
            memcpy(buf+total, bytes+offset, sz);
            offset=(offset+sz)%4;
            total=total+sz;
            buffsize=readbytes-sz;
        }
    }
};