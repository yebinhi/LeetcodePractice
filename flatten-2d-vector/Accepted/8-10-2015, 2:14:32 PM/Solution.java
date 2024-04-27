// https://leetcode.com/problems/flatten-2d-vector

public class Vector2D {
    List<Integer> list = new ArrayList<Integer>();
    int ptr =0;
    public Vector2D(List<List<Integer>> vec2d) {
        int len = vec2d.size();
        for(int i =0; i<vec2d.size(); i++){
            if(vec2d.get(i).size() != 0){
                list.addAll(vec2d.get(i));
            }
        }
    }

    public int next() {
        return list.get(ptr++);
    }

    public boolean hasNext() {
        return ptr<list.size();
    }
}

/**
 * Your Vector2D object will be instantiated and called as such:
 * Vector2D i = new Vector2D(vec2d);
 * while (i.hasNext()) v[f()] = i.next();
 */