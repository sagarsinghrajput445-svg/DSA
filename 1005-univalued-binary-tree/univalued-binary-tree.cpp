class Solution {
public:
    void helper(TreeNode* root,int target,bool& flag){
        if(root==NULL) return;
        if(root->val!=target) flag= false;
        helper(root->left,target,flag);
        helper(root->right,target,flag);
    }
    bool isUnivalTree(TreeNode* root) {
        int target=root->val;
        bool flag=true;
        helper(root,target,flag);
        if(flag) return true;
        else return false;
    }
};