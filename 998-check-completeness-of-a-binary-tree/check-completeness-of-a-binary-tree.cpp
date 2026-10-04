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
    int sizeOfTree(TreeNode* root) {
        if (root == NULL)
            return 0;
        return 1 + sizeOfTree(root->left) + sizeOfTree(root->right);
    }
    bool isCompleteTree(TreeNode* root) {
        int size = sizeOfTree(root);
        int count = 0;
        queue<TreeNode*> q;
        q.push(root);
        while (count < size) {
            TreeNode* temp = q.front();
            q.pop();
            count++;
            if (temp != NULL) {
                q.push(temp->left);
                q.push(temp->right);
            }
        }
        while(q.size() > 0) {
            TreeNode* temp = q.front();
            if (temp != NULL)
                return false;
            q.pop();
        }
        return true;
    }
};