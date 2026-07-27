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
    ListNode* mergeInBetween(ListNode* list1, int a, int b, ListNode* list2) {
        ListNode* x = NULL;
        ListNode* y = NULL;
        ListNode* temp1 = list1;
        for (int i = 1; i <= b + 2; i++) {
            if (i == a)
                x = temp1;
            if (i == b + 2)
                y = temp1;
            temp1 = temp1->next;
        }
        ListNode* temp = list2;
        while (temp->next != NULL) {
            temp = temp->next;
        }
        x->next = list2;
        temp->next = y;
        return list1;
    }
};