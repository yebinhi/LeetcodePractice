// https://leetcode.com/problems/flatten-2d-vector

public class Vector2D {
    
    List<Integer> list = new ArrayList<Integer>();

    public Vector2D(List<List<Integer>> vec2d) {
        int len = vec2d.size();
        for(int i =0; i<len; i++){
            List<Integer> newList = vec2d.get(0);
            for(int j = 0; j<newList.size(); j++){
                list.add(newList.get(j));
            }
        }
    }

    public int next() {
        return list.get(0);
    }

    public boolean hasNext() {
        return list.isEmpty();
    }
}

/**
 * Your Vector2D object will be instantiated and called as such:
 * Vector2D i = new Vector2D(vec2d);
 * while (i.hasNext()) v[f()] = i.next();
 */