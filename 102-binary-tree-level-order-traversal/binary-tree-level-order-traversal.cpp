class Solution {
public:
    void levelQueueOrder(TreeNode* root, vector<vector<int>>& ans) {
        if(root==NULL) return;
        queue<TreeNode*> q;
        q.push(root);
        while (q.size() > 0) {
            int n = q.size();
            vector<int> v;
            for (int i = 1; i <= n; i++) {
                TreeNode* temp = q.front();
                q.pop();
                v.push_back(temp->val);
                if (temp->left != NULL)
                    q.push(temp->left);
                if (temp->right != NULL)
                    q.push(temp->right);
            }
            ans.push_back(v);
        }
    }
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>> ans;
        levelQueueOrder(root, ans);
        return ans;
    }
};