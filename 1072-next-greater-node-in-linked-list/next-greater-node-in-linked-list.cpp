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
    ListNode* reverseList(ListNode* head){
        if(head==NULL || head->next==NULL) return head;
        ListNode* newHead=reverseList(head->next);
        head->next->next=head;
        head->next=NULL;
        return newHead;
    }
    vector<int> nextLargerNodes(ListNode* head) {
        ListNode* temp=head;
        int n=0;
        while(temp){
            n++;
            temp=temp->next;
        }
        ListNode* ans=reverseList(head);
        temp=ans->next;
		vector<int>nge(n);
		stack<int>st;
		nge[0] = 0;
		st.push(ans->val);
		for(int i=1;i<n;i++) {
			while (st.size()>0 && st.top() <= temp->val) {
				st.pop();
			}
			if (st.size() == 0)
				nge[i] = 0;
			else
				nge[i] = st.top();
			st.push(temp->val);
            temp=temp->next;
		}
        reverse(nge.begin(),nge.end());
		return nge; 
    }
};