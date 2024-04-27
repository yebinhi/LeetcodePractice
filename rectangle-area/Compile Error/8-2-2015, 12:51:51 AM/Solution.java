// https://leetcode.com/problems/rectangle-area

public class Solution {
    public int computeArea(int A, int B, int C, int D, int E, int F, int G, int H) {
        int S1 = (C-A)*(D-B);
        int s2 = (G-E)*(H-F);
        int cover = (Math.min(C,G)-Math.max(A,E))*(Math.max(E,A)-Math.min(H,D));
        return s1+s2-cover;
    }
}