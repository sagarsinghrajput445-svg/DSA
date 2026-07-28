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
    ListNode* reverse(ListNode* head) {
        if (head == NULL || head->next == NULL)
            return head;
        ListNode* node = reverse(head->next);
        head->next->next = head;
        head->next = NULL;
        return node;
    }
    void reorderList(ListNode* head) {
        ListNode* slow = head;
        ListNode* fast = head;
        while (fast->next && fast->next->next) {
            slow = slow->next;
            fast = fast->next->next;
        }
        ListNode* b= reverse(slow->next);
        ListNode* a = head;
        slow->next=NULL;
        ListNode* c = new ListNode(10);
        ListNode* tempc = c;
        ListNode* tempa=a;
        ListNode* tempb=b;
        while (tempa && tempb) {
            tempc->next = tempa;
            tempc = tempc->next;
            tempa = tempa->next;
           
            tempc->next = tempb;
            tempc = tempc->next;
            tempb = tempb->next;
            
        }
        tempc->next=tempa;
        head=c->next;
    }
};