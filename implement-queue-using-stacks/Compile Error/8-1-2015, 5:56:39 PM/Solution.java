// https://leetcode.com/problems/implement-queue-using-stacks

class MyQueue {
    Stack<Integer> stack1 = new Stack<Integer>();
    Stack<Integer> stack2 = new Stack<Integer>();
    // Push element x to the back of queue.
    public void push(int x) {
        stack1.push(x);
    }

    // Removes the element from in front of queue.
    public void pop() {
        if(stack2.isEmpty()){
            while(!stack1.isEmpty()){
                stack2.push(stack1.pop());
            }
        }
        stack2.pop();
    }

    // Get the front element.
    public int peek() {
         if(stack2.isEmpty()){
            while(!stack1.isEmpty){
                stack2.push(stack1.pop());
            }
        }
        stack2.peek();
        
    }

    // Return whether the queue is empty.
    public boolean empty() {
        if(stack1.isEmpty() && stack2.isEmpty){
            return true;
        }
        return false;
    }
}