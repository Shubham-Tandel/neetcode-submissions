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
        if(head == NULL){
            return NULL;
        }
        Node* curr = head;
        while(curr != NULL){
            Node* copy = new Node(curr->val);
            copy->next = curr->next;
            curr->next = copy;
            curr = copy->next;
        }

        curr = head;
        while (curr != NULL) {

            if (curr->random != NULL) {
                curr->next->random = curr->random->next;
            }

            curr = curr->next->next;
        }

        curr = head;
        Node* copyHead = head->next;
        Node* copy = copyHead;
        while(curr != NULL){
            curr->next = copy->next;
            curr = curr->next;
            if(curr != NULL){
                copy->next = curr->next;
                copy = copy->next;
            }
        }

        return copyHead;
    }
};
