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
    vector<vector<int>> spiralMatrix(int m, int n, ListNode* head) {
        vector<vector<int>> list(m,vector<int>(n,-1));
        ListNode* temp=head;
        int minr=0;
        int minc=0;
        int maxr=m-1;
        int maxc=n-1;
        while(minr<=maxr && minc<=maxc){
            for(int j=minc;j<=maxc;j++){
                if(temp!=NULL){
                    list[minr][j]=temp->val;
                    temp=temp->next;
                }
            }
            minr++;
            for(int i=minr;i<=maxr;i++){
                if(temp!=NULL){
                    list[i][maxc]=temp->val;
                    temp=temp->next;
                }
            }
            maxc--;
            for(int j=maxc;j>=minc;j--){
                if(temp!=NULL){
                    list[maxr][j]=temp->val;
                    temp=temp->next;
                }
            }
            maxr--;
            for(int i=maxr;i>=minr;i--){
                if(temp!=NULL){
                    list[i][minc]=temp->val;
                    temp=temp->next;
                }
            }
            minc++;
        }
        return list;
    }
};