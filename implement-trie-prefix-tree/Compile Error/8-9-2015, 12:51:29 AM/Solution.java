// https://leetcode.com/problems/implement-trie-prefix-tree

class TrieNode {
    // Initialize your data structure here.
    Character c;
    HashMap<Character, TrieNode> children = new HashMap<Character, TrieNode>();
    boolean isLeaf;
        
    public TrieNode(){
    }
    public TrieNode(Character c){
            this.c = c;
    }
}

public class Trie {
    private TrieNode root;

    public Trie() {
        root = new TrieNode();
    }

    // Inserts a word into the trie.
    public void insert(String word) {
        HashMap<Character, TrieNode> children = root.children;
        
        for(int i =0; i<word.length();i++){
            Character c = word.charAt(i);
            TrieNode current;
            if(children.containsKey(c)){
                current = children.get(c);
            }else{
                current = new TrieNode(c);
                children.put(c, t);
            }
            children = current.children;
            
            if(i == word.length()-1){
                isLeaf = true;
            }
        }
    }

    // Returns if the word is in the trie.
    public boolean search(String word) {
        TrieNode last = searchNode(word);
        if(last != null && last.isLeaf == true){
            return true;
        }
        return false;
    }

    // Returns if there is any word in the trie
    // that starts with the given prefix.
    public boolean startsWith(String prefix) {
        TrieNode last = searchNode(word);
        if(last != null){
            return true;
        }else{
            return false;
        }
    }
    
    public TrieNode searchNode(String word){
        int len = word.length();
        HashMap<Character, TrieNode> children = root.children;
        TrieNode t;
        for(int i =0; i< len; i++){
            char c = word.charAt(i);
            if(children.chontainsKey(c)){
                t = children.get(c);
                children = t.children;
            }else{
                return null;
            }
        }
        return t;
    }
}

// Your Trie object will be instantiated and called as such:
// Trie trie = new Trie();
// trie.insert("somestring");
// trie.search("key");