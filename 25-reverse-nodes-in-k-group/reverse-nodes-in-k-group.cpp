class Solution {
public:
    ListNode* reverse(ListNode* head) {
        if (head == NULL || head->next == NULL)
            return head;
        ListNode* newHead = reverse(head->next);
        head->next->next = head;
        head->next = NULL;
        return newHead;
    }
    ListNode* reverseKGroup(ListNode* head, int k) {
        int n = 0;
        ListNode* a = head;
        while (a) {
            n++;
            a = a->next;
        }
        ListNode* c = new ListNode(-111);
        ListNode* tempc = c;
        while (n >=k) {
           ListNode* temp = head;
            for (int i = 1; i < k; i++) {
                temp = temp->next;
            }
            ListNode* pointH = temp->next;
            temp->next = NULL;
            ListNode* newhead = reverse(head);
            tempc->next = newhead;
            tempc = head;
            head = pointH;
            n = n - k;
        }
        tempc->next = head;
        return c->next;
    }
};