class Solution {
public:
    void helper(TreeNode* root,int sum, bool& flag) {
        if (root == NULL) return;
        if (root->left == NULL && root->right == NULL) {
           if(root->val==sum){
                flag=true;
           }
        }
        helper(root->left,sum-(root->val),flag);
        helper(root->right,sum-(root->val),flag);
    }
    bool hasPathSum(TreeNode* root, int targetSum) {
        bool flag=false;
        helper(root,targetSum,flag);
        if(flag) return true;
        else return false;
        
    }
};