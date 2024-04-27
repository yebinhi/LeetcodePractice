// https://leetcode.com/problems/implement-queue-using-stacks

class MyQueue {
    Node head;
    Node end;
    // Push element x to the back of queue.
    public void push(int x) {
        Node newNode = new Node(x);
        if(head == null){
            head = newNode;
        }
        end.next = newNode;
        newNode.prev = end;
        end = newNode;
        
        
    }

    // Removes the element from in front of queue.
    public void pop() {
        if(head == null){
            return;
        }
        head = head.next;
    }

    // Get the front element.
    public int peek() {
        return head.data;
    }

    // Return whether the queue is empty.
    public boolean empty() {
        if(head == null){
            return true;
        }
        return false;
    }
    
    class Node{
        int data;
        Node next;
        Node prev;
        Node(int da){
            data=da;
        }
    }
    
}