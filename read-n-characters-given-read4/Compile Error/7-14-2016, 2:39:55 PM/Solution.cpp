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
        char bytes[4];
        int total;
        bool flag;
        while(total<n && flag){
            int num=read4(bytes);
            if(readNum<4) falg = false;
            int sz=min(num, n-total);
            memcpy(buf+total, bytes, sz);
            total+=sz;
        }
    }
};