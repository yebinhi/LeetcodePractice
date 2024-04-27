// https://leetcode.com/problems/implement-stack-using-queues

class MyStack {
    Queue<Integer> stack = LinkedList<Integer>();
    // Push element x onto stack.
    public void push(int x) {
        stack.addFirst(x);
    }

    // Removes the element on top of the stack.
    public void pop() {
        stack.removeFirst();
    }

    // Get the top element.
    public int top() {
        return stack.getFirst();
    }

    // Return whether the stack is empty.
    public boolean empty() {
        return stack.isEmpty;
    }
}