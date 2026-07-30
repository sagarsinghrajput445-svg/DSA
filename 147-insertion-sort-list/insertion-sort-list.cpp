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
    ListNode* insertionSortList(ListNode* head) {
        ListNode* temp = head->next;
        while (temp) {
            ListNode* j = head;
            while (j!=temp) {
                if (j->val > temp->val)
                    swap(j->val, temp->val);

                j = j->next;
            }
            temp = temp->next;
        }
        return head;
    }
};