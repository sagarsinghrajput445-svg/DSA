class Solution {
public:
    void helper(TreeNode* root,TreeNode* &prev,bool &flag) {
        if (root == NULL)
            return;
        helper(root->left,prev,flag);
        if (prev != NULL) {
            if (root->val <= prev->val) {
                flag = false;
                return;
            }
        }
        prev = root;
        helper(root->right,prev,flag);
    }
    bool isValidBST(TreeNode* root) {
        TreeNode* prev = NULL;
        bool flag = true;
        helper(root,prev,flag);
        return flag;
    }
};