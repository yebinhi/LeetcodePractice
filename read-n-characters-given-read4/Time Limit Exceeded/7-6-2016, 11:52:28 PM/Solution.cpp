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
        if(n<=0) return 0;
        
        char bytes[4];
        int total=0;
        bool flag=true;
        while(total<n){
            int readBytesNum=read4(bytes);
            if(readBytesNum<4) flag==false;
            int sz=min(n-total, readBytesNum);
            memcpy(buf+total, bytes, sz);
            total+=sz;
        }
        return total;
    }
};