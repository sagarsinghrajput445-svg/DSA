class Solution {
public:
    int helper(TreeNode* root,long long sum) {
        if (root == NULL)
            return 0;
        int count=0;
        if ((long long)(root->val) == sum) {
           count++;
        }
        return count+ helper(root->left,sum -(long long) (root->val))+helper(root->right,sum -(long long) (root->val));
    }
    int pathSum(TreeNode* root, int targetSum) {
        if(root==NULL) return 0;
        int count= helper(root,(long long)(targetSum));
        count += (pathSum(root->left, targetSum) + pathSum(root->right, targetSum));
        return count;
    }
};