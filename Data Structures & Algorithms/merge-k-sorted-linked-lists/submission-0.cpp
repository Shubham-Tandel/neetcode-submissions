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

    // Merge two sorted linked lists
    ListNode* merge(ListNode* l1, ListNode* l2) {

        ListNode dummy(0);
        ListNode* tail = &dummy;

        while (l1 && l2) {

            if (l1->val < l2->val) {
                tail->next = l1;
                l1 = l1->next;
            }
            else {
                tail->next = l2;
                l2 = l2->next;
            }

            tail = tail->next;
        }

        if (l1)
            tail->next = l1;
        else
            tail->next = l2;

        return dummy.next;
    }

    // Divide and Conquer
    ListNode* solve(vector<ListNode*>& lists, int left, int right) {

        if (left == right)
            return lists[left];

        int mid = left + (right - left) / 2;

        ListNode* l1 = solve(lists, left, mid);
        ListNode* l2 = solve(lists, mid + 1, right);

        return merge(l1, l2);
    }

    ListNode* mergeKLists(vector<ListNode*>& lists) {

        if (lists.size() == 0)
            return NULL;

        return solve(lists, 0, lists.size() - 1);
    }
};