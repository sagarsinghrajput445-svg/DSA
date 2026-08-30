class Solution {
public:
    long long maximum(TreeNode* root) {
        if (root == NULL)
            return LLONG_MIN;
        long long lmax = maximum(root->left);
        long long rmax = maximum(root->right);
        return max((long long)(root->val), max(lmax, rmax));
    }
    long long minimum(TreeNode* root) {
        if (root == NULL)
            return LLONG_MAX;
        long long leftans = minimum(root->left);
        long long rightans = minimum(root->right);
        return min((long long)(root->val), min(leftans, rightans));
    }
    bool isValidBST(TreeNode* root) {
        if(root==NULL) return true;
        if (((long long)(root->val) <= maximum(root->left)) || (root->val >= minimum(root->right)))
            return false;
        return isValidBST(root->left) && isValidBST(root->right);
    }
};