class Solution {
public:
    void find(TreeNode* root, int pos, int& l, int& r) {
        if (!root)
            return;
        l = min(l, pos);
        r = max(r, pos);
        find(root->left, pos - 1, l, r);
        find(root->right, pos + 1, l, r);
    }
    vector<vector<int>> verticalTraversal(TreeNode* root) {
        int l = 0;
        int r = 0;
        find(root, 0, l, r);
        vector<vector<pair<int, int>>> negative(abs(l) + 1);
        vector<vector<pair<int, int>>> positive(r + 1);
        queue<TreeNode*> q;
        queue<int> index;
        queue<int> level;
        q.push(root);
        index.push(0);
        level.push(0);
        while (!q.empty()) {
            TreeNode* temp = q.front();
            q.pop();
            int pos = index.front();
            index.pop();
            int lev = level.front();
            level.pop();
            if (pos > 0)
                positive[pos].push_back({lev, temp->val});
            else
                negative[abs(pos)].push_back({lev, temp->val});
            if (temp->left) {
                q.push(temp->left);
                index.push(pos - 1);
                level.push(lev + 1);
            }
            if (temp->right) {
                q.push(temp->right);
                index.push(pos + 1);
                level.push(lev + 1);
            }
        }
        vector<vector<int>> ans;
        int i = negative.size() - 1;
        while (i >= 0) {
            sort(negative[i].begin(), negative[i].end());
            vector<int> v;
            for (int j = 0; j < negative[i].size(); j++) {
                v.push_back(negative[i][j].second);
            }
            if (!v.empty())
                ans.push_back(v);
            i--;
        }
        i = 0;
        while (i < positive.size()) {
            sort(positive[i].begin(), positive[i].end());
            vector<int> v;
            for (int j = 0; j < positive[i].size(); j++) {
                v.push_back(positive[i][j].second);
            }
            if (!v.empty())
                ans.push_back(v);
            i++;
        }
        return ans;
    }
};