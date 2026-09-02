/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int>v;
        TreeNode* curr=root;
        while(curr!=NULL){
            if(curr->left!=NULL){ // find the pred
                TreeNode* pred=curr->left;
                while(pred->right!=NULL && pred->right!=curr){
                    pred=pred->right;
                }
                if(pred->right==NULL){ // link
                    pred->right=curr;
                    curr=curr->left;
                }
                else{ // curr->left==curr
                    pred->right=NULL;
                    v.push_back(curr->val);
                    curr=curr->right;
                }
            }
            else{ // curr->left==null
                v.push_back(curr->val);
                curr=curr->right;
            }
        }
        return v;
    }
};