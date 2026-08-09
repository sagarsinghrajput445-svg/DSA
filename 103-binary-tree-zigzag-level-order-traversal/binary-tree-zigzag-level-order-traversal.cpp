class Solution {
public:
    int levels(TreeNode* root) {
        if (root == NULL)
            return 0;
        return 1 + max(levels(root->left), levels(root->right));
    }
    void nthprint(TreeNode* root, int level, int curr, vector<int>& v) {
        if (root == NULL)
            return;
        if (curr == level) {
            v.push_back(root->val);
            return;
        }
        nthprint(root->left, level, curr + 1, v);
        nthprint(root->right, level, curr + 1, v);
    }
    void nthprintrev(TreeNode* root, int level, int curr, vector<int>& v) {
        if (root == NULL)
            return;
        if (curr == level) {
            v.push_back(root->val);
            return;
        }
        nthprintrev(root->right, level, curr + 1, v);
        nthprintrev(root->left, level, curr + 1, v);
    }
    void lOrder(TreeNode* root, vector<vector<int>>& ans) {
        int n = levels(root);
        for (int i = 1; i <= n; i++) {
            vector<int> v;
            if (i % 2 != 0){
                nthprint(root, i, 1, v);
                ans.push_back(v);
            }
            else{
                nthprintrev(root, i, 1, v);
                ans.push_back(v);
            }
        }
    }
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>> ans;
        lOrder(root, ans);
        return ans;
    }
};