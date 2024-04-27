// https://leetcode.com/problems/rectangle-area

public class Solution {
    public int computeArea(int A, int B, int C, int D, int E, int F, int G, int H) {
        if(C<E ||G<A){
            return (C-A)*(D-B)+(G-E)*(H-F);
        }
        if(D<F || H<B){
            return (C-A)*(D-B)+(G-E)*(H-F);
        }
        
        int s1 = (C-A)*(D-B);
        int s2 = (G-E)*(H-F);
        int cover = (Math.min(C,G)-Math.max(A,E))*(Math.min(H,D)-Math.max(F,B));
        return s1+s2-cover;
    }
}