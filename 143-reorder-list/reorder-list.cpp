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
    ListNode* reverse(ListNode* head){
        if(head==NULL || head->next==NULL) return head;
        ListNode* node=reverse(head->next);
        head->next->next=head;
        head->next=NULL;
        return node;
    }
    void reorderList(ListNode* head) {
       if(head->next!=NULL){
         ListNode* slow=head;
        ListNode* fast=head;
        while(fast->next && fast->next->next){
            slow=slow->next;
            fast=fast->next->next;
        }
        ListNode* newHead=slow->next;
        slow->next=NULL;
        ListNode* temp=newHead;
        while(temp->next!=NULL){
            temp=temp->next;
        }
        reverse(newHead);
        ListNode* a=head;
        ListNode* b=temp;
        ListNode* c=new ListNode(10);
        ListNode* tempc=c;
        while(a){
           tempc->next=a;
           tempc=tempc->next;
           a=a->next;
           if(b!=NULL){
            tempc->next=b;
           tempc=tempc->next;
           b=b->next;
           }
        }
       }
    }
};