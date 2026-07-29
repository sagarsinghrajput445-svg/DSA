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
    ListNode* deleteDuplicates(ListNode* head) {
        if (head == NULL)
            return NULL;
        ListNode* a = head;
        ListNode* b = head;
        while (b != NULL && b->next != NULL) {
            if (b == head && b->val == b->next->val) {
                while (b->next != NULL && b->val == b->next->val)
                    b = b->next;
                a = b->next;
                b = a;
                head=a;
            } else {
                if (b->val != b->next->val) {
                    a = b;
                    b = b->next;
                } else {
                    while (b->next != NULL && b->val == b->next->val)
                        b = b->next;
                    b = b->next;
                    a->next = b;
                }
            }
        }
        return head;
    }
};