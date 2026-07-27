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
    ListNode* swapNodes(ListNode* head, int k) {
        ListNode* temp1=NULL;
        ListNode* temp2=NULL;
        ListNode* temp=head;
        int len=0;
        while(temp){
            len++;
            temp=temp->next;
        }
        temp=head;
        for(int i=1;i<=len;i++){
            if(i==k) temp1=temp;
            if(i==len-k+1) temp2=temp;
            temp=temp->next;
        }
        swap(temp1->val,temp2->val);
        return head;
    }
};