class Solution {
public:
     void helper(TreeNode* root, vector<int>& ans){
        if(root==NULL) return;
        helper(root->left,ans);
        ans.push_back(root->val);
        helper(root->right,ans);
    }
    bool isValidBST(TreeNode* root) {
        vector<int>ans;
        helper(root,ans);
        for(int i=1;i<ans.size();i++){
            if(ans[i]<=ans[i-1]) return false;
        }
        return true;
    }
};