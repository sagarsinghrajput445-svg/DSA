/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left),
 * right(right) {}
 * };
 */
class Solution {
public:
    int levels(TreeNode* root) {
        if (root == NULL)
            return 0;
        return 1 + max(levels(root->left), levels(root->right));
    }
    bool helper(TreeNode* root) {
        if (root == NULL)
            return true;
        int bal = abs(levels(root->left) - levels(root->right));
        if(bal!=0 && bal!=1) return false;
        if(helper(root->left)==false) return false;
        if(helper(root->right)==false) return false;
        return true;
    }
    bool isBalanced(TreeNode* root) {
        return helper(root);
    }
};