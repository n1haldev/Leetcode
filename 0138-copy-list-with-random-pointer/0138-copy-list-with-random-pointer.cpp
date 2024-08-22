/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/

class Solution {
public:
    Node* copyRandomList(Node* head) {
        unordered_map<Node*, Node*> oldnew;
        
        Node* cur = head;
        
        while(cur) {
            Node* temp = new Node(cur->val);
            oldnew[cur] = temp;
            cur = cur->next;
        }
        
        cur = head;
        
        while(cur) {
            Node* copy = oldnew[cur];
            copy->next = oldnew[cur->next];
            copy->random = oldnew[cur->random];
            cur = cur->next;
        }
        
        return oldnew[head];
    }
};