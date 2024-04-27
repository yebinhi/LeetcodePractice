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
     int bytesLeft=0;
     int offsize=0;
    int read(char *buf, int n) {
        int total=0;
        bool flag=true;
        while(total<n && flag){
            int num = (bytesLeft >0) ? bytesLeft:read4(bytes);
            if(num<4 && bytesLeft==0) flag=false;
            int sz=min(n-total, num);
            memcpy(buf+total, bytes+offsize, sz);
            offsize=(offsize+sz)%4;
            bytesLeft=num-sz;
            total+=sz;
        }
        return total;
    }
};