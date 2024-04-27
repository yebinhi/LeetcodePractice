// https://leetcode.com/problems/min-stack

class MinStack {
    List<Integer> stack = new ArrayList<Integer>();
    PriorityQueue<Integer> minQueue = new PriorityQueue<Integer>();
    
    public void push(int x) {
        stack.add(x);
        minQueue.add(x);
        
    }

    public void pop() {
        minQueue.remove(stack.remove(stack.size()-1));
    }

    public int top() {
        return stack.get(stack.size()-1);
    }

    public int getMin() {
        return minQueue.peek();
    }
}
