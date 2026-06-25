/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */

class Solution {
public:
    bool hasCycle(ListNode* head) {
        if(head == NULL){
            return false;
        }
        ListNode* F = head;
        ListNode* S = head;

        while(F->next != NULL){
            if(F->next->next == NULL){
                return false;
            }
            if(F->next == S){
                return true;
            }
            F = F->next->next;
            S = S->next;
        }
        return false;

    }
};
